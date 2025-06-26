#include <stdio.h>
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Nhap vao mot so nguyen duong:\n");
    scanf("%d", &n);
    if (n < 0) {
        printf("Vui long nhap vao mot so nguyen duong\n");
        return 1;
    }
    int result = factorial(n);
    printf("Tong cac so tu 1 den %d la: %d\n", n, result);
    return 0;
}
