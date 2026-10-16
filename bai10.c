//Xóa tất cả các phần tử bằng x
#include <stdio.h>
int main() {
    int a[100], n, x, j = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap x can xoa: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            a[j] = a[i];
            j++;
        }
    }

    n = j;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
