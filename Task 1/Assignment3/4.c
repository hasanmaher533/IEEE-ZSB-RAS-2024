#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    int i;
    for (i = 0; str1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);

    return 0;
}
