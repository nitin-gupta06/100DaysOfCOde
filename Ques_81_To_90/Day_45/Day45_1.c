/*Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int countFrequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("Enter the character to count frequency: ");
    scanf(" %c", &ch);
    int frequency = countFrequency(str, ch);
    printf("Frequency of '%c': %d\n", ch, frequency);
    return 0;
}