#include <stdio.h>
#include <string.h>

// Function to print word for each digit
void printDigit(char c) {
    switch (c) {
        case '0': printf("zero"); break;
        case '1': printf("one"); break;
        case '2': printf("two"); break;
        case '3': printf("three"); break;
        case '4': printf("four"); break;
        case '5': printf("five"); break;
        case '6': printf("six"); break;
        case '7': printf("seven"); break;
        case '8': printf("eight"); break;
        case '9': printf("nine"); break;
        default: printf(""); break;
    }
}

int main() {
    char num[100];
    printf("Enter a number: ");
    if (scanf("%99s", num) != 1) {
        return 1;
    }

    size_t len = strlen(num);
    for (size_t i = 0; i < len; i++) {
        if (i > 0) {
            printf(" ");
        }
        // Handle negative sign
        if (num[i] == '-') {
            printf("minus");
        } else {
            printDigit(num[i]);
        }
    }
    printf("\n");
    return 0;
}
