#include <stdio.h>
#include <string.h>
#include <ctype.h>
int convert_to_integer(char *s, int index) {
    if (s[0] == '-' && index == 1) {
        return -convert_to_integer(s + 1, index);
    }
    if (s[index] == '\0') {
        return 0;
    }
    if (!isdigit(s[index])) {
        return -1;
    }
    int value = convert_to_integer(s, index + 1);
    int digit = s[index] - '0';
    int multiplier = 1;

    for (int i = index + 1; i < strlen(s); i++) {
        multiplier *= 10;
    }
    return value + (digit * multiplier);
}
int main() {
    char input[100];
    printf("Nhap vao chuoi ky tu so: ");
    scanf("%s", input);
    int result = convert_to_integer(input, 0);
    if (result == -1) {
        printf("Input khong hop le\n");
    } else {
        printf("%d\n", result);
    }
    return 0;
}
