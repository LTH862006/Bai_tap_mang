//Thêm phần tử x vào sau phần tử chẵn đầu tiên
#include <stdio.h>
int main() {
    int a[100], n, x, viTri = -1;

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

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            viTri = i;
            break;
        }
    }

    if (viTri == -1) {
        printf("Mang khong co so chan");
        return 0;
    }

    for (int i = n; i > viTri + 1; i--)
        a[i] = a[i - 1];

    a[viTri + 1] = x;
    n++;

    printf("Mang sau khi them: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
