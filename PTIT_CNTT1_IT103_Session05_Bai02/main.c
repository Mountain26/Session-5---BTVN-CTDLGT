#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}
int main() {
    int n;
    printf("Nhap vao mot so nguyen duong:\n");
    scanf("%d", &n);
    if (n < 0) {
        printf("Vui long nhap vao mot so nguyen duong\n");
        return 1;
    }
    int result = sum(n);
    printf("Tong cac so tu 1 den %d la: %d\n", n, result);
    return 0;
}
