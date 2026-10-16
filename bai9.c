//Xóa phần tử đầu tiên của mảng
#include <stdio.h>
int main() {
    int a[100], n;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    if (n > 0) {
        for (int i = 0; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;
    }

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
