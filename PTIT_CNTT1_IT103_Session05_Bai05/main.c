#include <stdio.h>
#include <string.h>
int kiemTraDoiXung(char arr[], int left, int right) {
    if (left > right) {
        return 1;
    }
    if (arr[left] != arr[right]) {
        return 0;
    }
    return kiemTraDoiXung(arr, left+1, right-1);
}
int main() {
    char arr[50];
    printf("Enter string:\n");
    fgets(arr, 50, stdin);
    arr[strcspn(arr, "\n")] = 0;
    int len = strlen(arr);
    int result = kiemTraDoiXung(arr, 0, len-1);
    if (result == 0) {
        printf("Chuoi khong doi xung\n");
    }else {
        printf("Chuoi doi xung\n");
    }
    return 0;
}