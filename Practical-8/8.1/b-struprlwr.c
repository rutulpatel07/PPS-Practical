//b) strupr() & strlwr()

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("Uppercase: %s\n", strupr(str));
    printf("Lowercase: %s\n", strlwr(str));
    return 0;
}
