#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    
    printf("Enter main string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    printf("\nLength of string: %lu", strlen(str1)); [cite: 203]

    strcpy(temp, str1);
    int len = strlen(temp);
    for(int i = 0; i < len/2; i++) {
        char t = temp[i];
        temp[i] = temp[len-1-i];
        temp[len-1-i] = t;
    }
    printf("\nReversed string: %s", temp);

    if (strcmp(str1, str2) == 0) [cite: 186]
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    if (strcmp(str1, temp) == 0)
        printf("\nPalindrome: Yes");
    else
        printf("\nPalindrome: No");

    if (strstr(str1, str2) != NULL) [cite: 205]
        printf("\nSubstring: Found");
    else
        printf("\nSubstring: Not Found");

    printf("\n");
    return 0;
}
