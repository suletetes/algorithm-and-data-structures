#include <iostream>
#include "cstdlib"

struct node {
    int data;
    struct node *next;
} *first = NULL, *second = NULL, *third = NULL;

void create(int a[], int n) {
    int i;
    struct node *t, *last;
    first = (struct node *) malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; ++i) {
        t = (struct node *) malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int a[], int n) {
    int i;
    struct node *t, *last;
    second = (struct node *) malloc(sizeof(struct node));
    second->data = a[0];
    second->next = NULL;
    last = second;
    for (i = 1; i < n; ++i) {
        t = (struct node *) malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

// functions starting with r are recursive functions
void rDisplay(struct node *p) {
    if (p != NULL) {
        rDisplay(p->next);
        printf("%d ", p->data);
    }
}

int count(struct node *p) {
    int l = 0;
    while (p) {
        l++;
        p = p->next;
    }
    return l;
}

int rCount(struct node *p) {
    if (p != NULL)
        return rCount(p->next) + 1;
    else
        return 0;

}

int sum(struct node *p) {
    int s = 0;
    while (p != NULL) {
        s += p->data;
        p = p->next;
    }
    return s;
}

int rSum(struct node *p) {
    if (p == NULL)
        return 0;
    else
        return rSum(p->next) + p->data;
}

int max(struct node *p) {
    int max = INT32_MIN;
    while (p) {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int rMax(struct node *p) {
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    x = rMax(p->next);
    if (x > p->data)
        return x;
    else
        return p->data;
}

struct node *lSearch(struct node *p, int key) {
    struct node *q;

    while (p != NULL) {
        if (key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;

}

struct node *rSearch(struct node *p, int key) {
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return rSearch(p->next, key);

}

void insert(struct node *p, int index, int x) {
    struct node *t;
    if (index < 0 || index > count(p))
        return;
    t = (struct node *) malloc(sizeof(struct node));
    t->data = x;
    if (index == 0) {
        t->next = first;
        first = t;
    } else {
        t->next = first;
        first = t;
    }
}

void sortedInsert(struct node *p, int x) {
    struct node *t, *q = NULL;
    t = (struct node *) malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if (first == NULL)
        first = t;
    else {
        while (p && p->data < x) {
            q = p;
            p = p->next;
        }
        if (p == first) {
            t->next = first;
            first = t;
        } else {
            t->next = q->next;
            first = t;
        }
    }
}

int Delete(struct node *p, int index) {
    struct node *q = NULL;
    int x = -1, i;
    if (index < 1 || index > count(p)) {
        return -1;
    }
    if (index == 1) {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    } else {
        for (i = 0; i < index - 1; ++i) {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int isSorted(struct node *p) {
    int x = -65536;
    while (p != NULL) {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}

int removeDuplicates(struct node *p) {
    struct node *q = p->next;
    while (q != NULL) {
        if (p->data != q->data) {
            p = q;
            q = q->next;
        } else {
            p->next = q->next;
            free(q);
            q = p->next;
        }

    }
};

void reverse(struct node *p) {
    int *a, i = 0;
    struct node *q;
    a = (int *) malloc(sizeof(int) * count(p));
    while (q != NULL) {
        a[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL) {
        q->data = a[i];
        q = q->next;
        i--;
    }
};

int reverse2(struct node *p) {
    struct node *q = NULL, *r = NULL;
    while (p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
};

void reverse3(struct node *q, struct node *p) {
    if (p) {
        reverse3(p, p->next);
        p->next = q;
    } else {
        first = q;
    }

}

void concat(struct node *p, struct node *q) {
    third = p;
    while (p->next != NULL)
        p = p->next;
    p->next = q;
}

void merge(struct node *p, struct node *q) {
    struct node *last;
    if (p->data < q->data) {
        third = last = p;
        p = p->next;
        third->next = NULL;
    } else {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q) {
        if (p->data < q->data) {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        } else {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p) last->next = p;
    if (q) last->next = q;
}

int isLoop(struct node *f) {
    struct node *p, *q;
    p = q = f;
    do {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    if (p == q)
        return 1;
    else
        return 0;
}

int main() {
//    struct node *temp;
    struct node *t1, *t2;

    int a[] = {3, 5, 7, 8, 8, 10, 12, 15, 18, 19, 20};
//    int a[] = {3, 5, 7, 8,  20};
//    create(a, 5);
//    t1 = first->next->next;
//    t2 = first->next->next->next->next;
//    t2->next = t1;
//    printf("%d\n", isLoop(first));

//    int b[] = {3, 5, 7, 8, 20};
//    create2(b, 5);
//    concat(first, second);
//    merge(first, second);
//    rDisplay(first);
//    printf("Length is %d ", rCount(first));
//    printf("sum is %d \n", sum(first));
//    printf("the max number  is %d \n", rMax(first));
//    temp = lSearch(first, 20);
//    if (temp)
//        printf("Key is found %d\n", temp->data);
//    else
//        printf("Key is not found");
//    insert(first, 0, 10); // insert function can be used to create linked list
//    sortedInsert(first, 35);
//    Delete(first, 1);

//    if (isSorted(first)) {  //
//        printf("Is  sorted \n");
//    } else {
//        printf("Is not sorted \n");
//    }
//    removeDuplicates(first);  // remove duplicates elements
//    reverse(first); // reverses linkedList elements
//    reverse2(first); // reverses linkedList elements
//    reverse3(NULL,first); // reverses linkedList elements
    printf("first\n");
    display(first);
//    printf("\n\n");

//    printf("second\n");
//    display(second);
//    printf("\n\n");
//
//    printf("concatenated\n");
//    display(third);
//    printf("\n\n");
    return 0;

}










