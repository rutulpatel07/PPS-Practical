// Write Ouput with Justification for the following code

#include<stdio.h>
int main()
{
    printf("The color: %s\n", "blue");
    printf("First number: %d\n", 12345);
    printf("Second number: %04d\n", 25);
    printf("Third number: %i\n", 1234);
    printf("Float number: %3.2f\n", 3.14159);
    printf("Hexadecimal: %x\n", 255);
    printf("Octal: %o\n", 255);
    printf("Unsigned value: %u\n", 150);
    printf("Just print the percentage sign %%\n", 10);
    return 0;
}

/*output
The color: blue
First number: 12345
Second number: 0025
Third number: 1234
Float number: 3.14
Hexadecimal: ff
Octal: 377
Unsigned value: 150
Just print the percentage sign %

Justification;
%s: The color: blue
%04d: Second number: 0025
%d: First number: 12345
%i: Third number: 1234
%x: Hexadecimal: ff
%3.2f: Float number: 3.14
%o: Octal: 377
%u: Unsigned value: 150
%%: Just print the percentage sign %

*/
