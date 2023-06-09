#include "stdio.h"
#include "chains.h"

int hash(int key) {
    return key % 10;

}

void insert(struct Node *h[], int key) {
    int index = hash(key);
    SortedInsert(&h[index], key);
}

int main() {
    struct Node *HT[10];
    struct Node *temp;
    for (int i = 0; i < 10; ++i) {
        HT[i] = NULL;
    }
    insert(HT, 12);
    insert(HT, 22);
    insert(HT, 42);
    temp = Search(HT[hash(22)], 22);
    printf("%d ", temp->data);
}