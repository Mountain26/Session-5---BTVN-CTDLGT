#include <stdio.h>
void printNumbers(int n) {
    if (n < 1) {
        return;
    }
    printNumbers(n - 1);
    printf("%d ", n);
}
int main() {
    int n;
    printf("Nhap vao mot so nguyen duong:\n");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap vao mot so nguyen duong\n");
        return 1;
    }
    printf("Cac so tu 1 den %d la:\n", n);
    printNumbers(n);
    printf("\n");
    return 0;
}
