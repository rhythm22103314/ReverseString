#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverseString(char str[]);

int main() {
    char str[MAX_LENGTH];

    // Ask the user for a string input
    printf("Enter a string (up to %d characters): ", MAX_LENGTH - 1);
    fgets(str, MAX_LENGTH, stdin);

    // Remove newline character if present
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    // Reverse the string
    reverseString(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}
