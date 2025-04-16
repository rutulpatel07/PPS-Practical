// Write a separate program using following string handling functions.
// a) strlen()

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length = %lu", strlen(str));
    return 0;
}