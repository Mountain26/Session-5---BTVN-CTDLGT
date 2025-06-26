#include <stdio.h>
int sum(int n, int y) {
    if (n > y) {
        return 0;
    }
    return n + sum(n + 1, y);
}
int main(){
    int n, y;
    printf("Nhap vao mot so nguyen duong thu nhat:\n");
    scanf("%d", &n);
    printf("Nhap vao mot so nguyen duong thu hai:\n");
    scanf("%d", &y);
    if (n < 0 || y < 0) {
        printf("Vui long nhap vao hai so nguyen duong\n");
        return 1;
    }
    if (n > y) {
        printf("So thu nhat phai nho hon hoac bang so thu hai\n");
        return 1;
    }
    int result = sum(n, y);
    printf("Tong cac so tu %d den %d la: %d\n", n, y, result);
    return 0;
}
