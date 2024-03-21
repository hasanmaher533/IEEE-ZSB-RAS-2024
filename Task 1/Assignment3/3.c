#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int flag = 1;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}
