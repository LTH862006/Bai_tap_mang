#include <stdio.h>
#include <math.h>

#define MAX 100
// Ham kiem tra so nguyen to
int laNguyenTo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

// Ham kiem tra so chinh phuong
int laChinhPhuong(int n) {
    if (n < 0)
        return 0;

    int i = (int)sqrt(n);
    return i * i == n;
}

int main() {
    int a[MAX];
    int n;

    // Nhap mang
    do {
        printf("Nhap so phan tu n (1-100): ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Xuat mang
    printf("\nMang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // a) Tong cac so chan
    int tongChan = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            tongChan += a[i];
    }
    printf("\na) Tong cac so chan = %d", tongChan);

    // b) Dem bao nhieu so le
    int demLe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0)
            demLe++;
    }
    printf("\nb) So luong so le = %d", demLe);

    // c) Liet ke cac so nguyen to
    printf("\nc) Cac so nguyen to: ");
    int coNguyenTo = 0;

    for (int i = 0; i < n; i++) {
        if (laNguyenTo(a[i])) {
            printf("%d ", a[i]);
            coNguyenTo = 1;
        }
    }

    if (coNguyenTo == 0)
        printf("Khong co");

    // d) Trung binh cong cac so le
    int tongLe = 0;
    int demLe2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tongLe += a[i];
            demLe2++;
        }
    }

    if (demLe2 > 0)
        printf("\nd) TBC cac so le = %.2f",
               (float)tongLe / demLe2);
    else
        printf("\nd) Mang khong co so le");

    // e) Kiem tra co so chinh phuong
    int coChinhPhuong = 0;

    for (int i = 0; i < n; i++) {
        if (laChinhPhuong(a[i])) {
            coChinhPhuong = 1;
            break;
        }
    }

    if (coChinhPhuong)
        printf("\ne) Mang co so chinh phuong");
    else
        printf("\ne) Mang khong co so chinh phuong");

    // f) Kiem tra mang co toan so chan
    int toanChan = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            toanChan = 0;
            break;
        }
    }

    if (toanChan)
        printf("\nf) Mang co toan so chan");
    else
        printf("\nf) Mang khong co toan so chan");

    // g) Kiem tra mang co tang dan
    int tangDan = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            tangDan = 0;
            break;
        }
    }

    if (tangDan)
        printf("\ng) Mang tang dan");
    else
        printf("\ng) Mang khong tang dan");

    // h) Kiem tra mang doi xung
    int doiXung = 1;

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            doiXung = 0;
            break;
        }
    }

    if (doiXung)
        printf("\nh) Mang doi xung");
    else
        printf("\nh) Mang khong doi xung");

    printf("\n");
    return 0;
}
