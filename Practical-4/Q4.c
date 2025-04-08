/*Write a program to check case of an entered character like following:
Note: do not use any character test functions.*/

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Entered Character is in Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Entered Character is in Lowercase\n");
    } else if(ch >= '0' && ch <= '9'){
        printf("Entered Character is a Digit\n");
    } else {
        printf("Not an alphanumeric character\n");
    }
    
    return 0;
}