 #include <iostream>
#include <stdio.h>
#include  "stdlib.h"
struct stack{
    int size;
    int top;
    int *s;
};
void create(struct stack *st){
    printf("Enter size");
    scanf("%d", &st->size);
    st->top =-1;
    st-> s= (int *)malloc(st->size*sizeof(int));
}
void display(struct stack st){
    int i;
    for(i = st.top;i>=0;i-- )
        printf("%d ", st.s[i]);
    printf("\n");

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
