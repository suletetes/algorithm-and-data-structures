#include <iostream>


struct element {
    int i;
    int j;
    int x;
};
struct sparse {
    int m;
    int n;
    int num;
    struct element *e;
};

void create(struct sparse *s) {
    int i;
    printf("Enter Dimensions ");
    scanf("%d%d", &s->m, &s->n);
    printf("Enter number of non zero ");
    scanf("%d", &s->num);
    s->e = new element[s->num];
    for (i = 0; i < s->num; ++i) {
        scanf("%d%d%d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
    }

}

void display(struct sparse s) {
    int i, j, k = 0;
    for (i = 0; i < s.m; ++i) {
        for (j = 0; j < s.n; ++j) {
            if (i == s.e[k].i && j == s.e[k].j)
                printf("%d ", s.e[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

struct sparse *add(struct sparse *s1, struct sparse *s2) {
    struct sparse *sum;
    int i, j, k;
    i = j = k = 0;
    sum = (struct sparse *) malloc(sizeof(struct sparse));
    sum->e = (struct element *) malloc((s1->num + s2->num) * sizeof(struct element));
    while (i < s1->num && j < s2->num) {
        if (s1->e[i].i < s2->e[i].i)
            sum->e[k++] = s1->e[i++];
        else if (s1->e[i].i > s2->e[i].i)
            sum->e[k++] = s2->e[i++];
    }
}

int main() {
    struct sparse s;
    create(&s);
    display(s);
    return 0;
}
