#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    // strlen length of str1 
    printf("Length of str1: %d\n", strlen(str1));

    // strcpy copy str1 to str3
    strcpy(str3, str1);
    printf("After copying, str3: %s\n", str3);

    // strcat concatenate str2 to str1
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    // strcmp compare str2 and str3
    if (strcmp(str2, str3) == 0)
        printf("str2 and str3 are equal\n");
    else
        printf("str2 and str3 are not equal\n");

    return 0;
}
