//Đếm số lượng > x
#include <stdio.h>
int main() {
    int a[100], n, x, dem = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] > x)
            dem++;
    }

    printf("So phan tu lon hon x = %d", dem);

    return 0;
}
