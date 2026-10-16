//Liệt kê các số > x
#include <stdio.h>
int main() {
    int a[100], n, x;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap x: ");
    scanf("%d", &x);

    printf("Cac so lon hon x: ");

    for (int i = 0; i < n; i++) {
        if (a[i] > x)
            printf("%d ", a[i]);
    }

    return 0;
}
