// Write a program to Count no. of Vowels in given String.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, count = 0;
    
    printf("Enter a string: ");
    
    /* SAFER STRING INPUT METHOD:
     * fgets() is used instead of gets() for safer string input
     * - gets() has no limit on input and can cause buffer overflow (security risk)
     * - fgets(buffer, size, stream) limits input to specified size
     * - The second parameter sizeof(str) prevents buffer overflow
     * - Unlike gets(), fgets() may include the newline character '\n' in the string
     * - gets() was removed from C standard library due to security concerns
     */
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }
    
    printf("Number of vowels in the string: %d\n", count);
    
    return 0;
}
