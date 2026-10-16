//Tìm vị trí số nguyên tố đầu tiên
#include <stdio.h>
int main() {
    int a[100], n, viTri = -1, nguyenTo;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < 2)
            continue;

        nguyenTo = 1;

        for (int j = 2; j <= a[i] / j; j++) {
            if (a[i] % j == 0) {
                nguyenTo = 0;
                break;
            }
        }

        if (nguyenTo == 1) {
            viTri = i;
            break;
        }
    }

    if (viTri != -1)
        printf("Vi tri so nguyen to dau tien: %d", viTri);
    else
        printf("Mang khong co so nguyen to");

    return 0;
}
