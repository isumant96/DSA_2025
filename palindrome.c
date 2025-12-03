#include <stdio.h>
#include <string.h>

// Recursive function
int isPalindrome(char str[], int start, int end) {
    // Base case: single or zero length is always palindrome
    if (start >= end)
        return 1;

    // If mismatch, not a palindrome
    if (str[start] != str[end])
        return 0;

    // Recursive call for the inner substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1))
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
