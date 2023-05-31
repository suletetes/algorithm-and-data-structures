 #include <iostream>
#include <stdio.h>
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
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
