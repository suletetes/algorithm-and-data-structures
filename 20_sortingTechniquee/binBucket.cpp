int main() {

    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;
    bubble(a, n);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
