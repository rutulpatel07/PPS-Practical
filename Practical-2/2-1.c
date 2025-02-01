#include <stdio.h>

int main()
{
    // For General Usage Variables
    int a = 10, b = 5;
    // For Logical Operator Usage Variables
    int c = 1, d = 0;
    // For Conditional Operator Usage Variables
    int max;
    // For Bitwise Operator Usage Variables
    int x = 12, y = 5;

    // Arithmetic Operators
    printf("Arithmetic Operators Demo:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Addition: a + b = %d\n", a + b);
    printf("Subtraction: a - b = %d\n", a - b);
    printf("Multiplication: a * b = %d\n", a * b);
    printf("Division: a / b = %d\n", a / b);
    printf("Modulus: a %% b = %d\n", a % b);
    printf("Increment: ++a = %d\n", ++a);
    printf("Decrement: --a = %d\n", --a);

    // Relational Operators
    printf("Relational Operators Demo:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Equal to: a == b is %d\n", a == b);
    printf("Not equal to: a != b is %d\n", a != b);
    printf("Less than: a < b is %d\n", a < b);
    printf("Greater than: a > b is %d\n", a > b);
    printf("Less than or equal to: a <= b is %d\n", a <= b);
    printf("Greater than or equal to: a >= b is %d\n", a >= b);

    // Logical Operator
    printf("Logical Operators Demo:\n");
    printf("c = %d, d = %d\n", c, d);
    printf("Logical AND: c && d is %d\n", c && d);
    printf("Logical OR: c || d is %d\n", c || d);
    printf("Logical NOT: !c is %d\n", !c);

    // Conditional Operator
    printf("Conditional Operator Demo:\n");
    max = (a > b) ? a : b;
    printf("Maximum between %d and %d is %d\n", a, b, max);

    // Shorthand Assignment
    printf("Shorthand Assignment Demo:\n");
    printf("Initial value: a = %d\n", a);

    a += 5;
    printf("After a += 5: %d\n", a);
    a -= 3;
    printf("After a -= 3: %d\n", a);
    a *= 2;
    printf("After a *= 2: %d\n", a);
    a /= 4;
    printf("After a /= 4: %d\n", a);
    a %= 3;
    printf("After a %%= 3: %d\n", a);

    // Bitwise Operators
    printf("Bitwise Operators Demo:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("Bitwise AND: x & y = %d\n", x & y);
    printf("Bitwise OR: x | y = %d\n", x | y);
    printf("Bitwise XOR: x ^ y = %d\n", x ^ y);
    printf("Left Shift: x << 1 = %d\n", x << 1);
    printf("Right Shift: x >> 1 = %d\n", x >> 1);
    printf("Bitwise NOT: ~x = %d\n", ~x);

    // Increment_Decrement Operator
    printf("Increment-Decrement Operators Demo:\n");
    printf("Initial value: b = %d\n\n", b);

    printf("Prefix increment: ++b = %d\n", ++b);
    printf("Current value: b = %d\n\n", b);

    printf("Postfix increment: b++ = %d\n", b++);
    printf("Current value: b = %d\n\n", b);

    printf("Prefix decrement: --b = %d\n", --b);
    printf("Current value: b = %d\n\n", b);

    printf("Postfix decrement: b-- = %d\n", b--);
    printf("Final value: b  %d\n", b);

    // Size Of Operator
    printf("Data Type Sizes:\n");
    printf("--------------------------------\n");
    printf("char:\t\t%lu byte\t\t[-128 to 127]\t\t%%c\n", sizeof(char));
    printf("unsigned char:\t%lu byte\t\t[0 to 255]\t\t%%c\n", sizeof(unsigned char));
    printf("short:\t\t%lu bytes\t[-32,768 to 32,767]\t%%d\n", sizeof(short));
    printf("unsigned short:\t%lu bytes\t[0 to 65535]\t\t%%u\n", sizeof(unsigned short));
    printf("int:\t\t%lu bytes\t[-2147483648 to 2147483647]\t%%d\n", sizeof(int));
    printf("unsigned int:\t%lu bytes\t[0 to 4294967295]\t%%u\n", sizeof(unsigned int));
    printf("long:\t\t%lu bytes\t[-2^63 to 2^63-1]\t%%ld\n", sizeof(long));
    printf("unsigned long:\t%lu bytes\t[0 to 2^64-1]\t\t%%lu\n", sizeof(unsigned long));
    printf("float:\t\t%lu bytes\t[3.4E-38 to 3.4E+38]\t%%f\n", sizeof(float));
    printf("double:\t\t%lu bytes\t[1.7E-308 to 1.7E+308]\t%%lf\n", sizeof(double));
    printf("long double:\t%lu bytes\t[3.4E-4932 to 1.1E+4932]\t%%Lf\n", sizeof(long double));

    return 0;

    return 0;
}