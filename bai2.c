//Kiểm tra mảng có giảm dần
#include <stdio.h>
int main() {
    int a[100], n, giamDan = 1;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            giamDan = 0;
            break;
        }
    }

    if (giamDan == 1)
        printf("Mang giam dan");
    else
        printf("Mang khong giam dan");

    return 0;
}
