#include <stdio.h>
#include <string.h>

char* reverse(char* str) {
    int length = strlen(str);
    char* start = str;
    char* end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    return str;
}

int main() {
    char str1[] = "FUNCTION";
    printf("Original string: %s\n", str1);

    char* reversedStr = reverse(str1);
    printf("Reversed string: %s\n", reversedStr);

    return 0;
}
