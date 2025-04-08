// 6.Justify the following output.
// A)
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
    default:
        printf("3");
    }
    return 0;
}

/*Scenario 1: Enter value of x=1
Scenario 2: Enter value of x=2
Scenario 3: Enter value of x=3*/
//Justification based on uppper scenario:-
//Scenario 1: Enter value of x=1
//Output: 1
//Justification: In this case, the value of x is 1, which matches the first case in the switch statement. The program prints "1" and then encounters the break statement, which exits the switch block. Therefore, the output is "1".
//Scenario 2: Enter value of x=2
//Output: 2
//Justification: In this case, the value of x is 2, which matches the second case in the switch statement. The program prints "2" but does not encounter a break statement after this case. As a result, it falls through to the default case and prints "3". Therefore, the output is "23".
//Scenario 3: Enter value of x=3
//Output: 3
//Justification: In this case, the value of x is 3, which does not match any of the defined cases (1 or 2). As a result, the program jumps to the default case and prints "3". Therefore, the output is "3".





