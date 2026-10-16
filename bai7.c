//Thêm số nguyên i vào đầu mảng
#include <stdio.h>
int main() {
    int a[100], n, x;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    if (n >= 100) {
        printf("Mang da day");
        return 0;
    }

    printf("Nhap so can them: ");
    scanf("%d", &x);

    for (int i = n; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = x;
    n++;

    printf("Mang sau khi them: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
