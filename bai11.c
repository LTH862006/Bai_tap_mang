//Tách mảng thành 2 mảng A và B, A chứa số chẵn, B chứa số lẻ
#include <stdio.h>
int main() {
    int a[100], A[100], B[100];
    int n, nA = 0, nB = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            A[nA] = a[i];
            nA++;
        } else {
            B[nB] = a[i];
            nB++;
        }
    }

    printf("Mang A chua so chan: ");
    for (int i = 0; i < nA; i++)
        printf("%d ", A[i]);

    printf("\nMang B chua so le: ");
    for (int i = 0; i < nB; i++)
        printf("%d ", B[i]);

    return 0;
}
