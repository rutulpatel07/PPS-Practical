// 6.Justify the following output.
// B)
#include <stdio.h>
int global_num = 20;
int main()
{
    int sum = global_num + global_num;
    {
        int sum = 300;
        printf("Inside block: sum = %d \n", sum);
    }
    printf("Outside block: sum = %d \n", sum);
}

//Output:-
//Inside block: sum = 300
//Outside block: sum = 40
//Justification:-
//In this code, there are two variables named "sum" defined in different scopes. The first "sum" is defined in the main function and is initialized to the value of "global_num + global_num", which is 20 + 20 = 40. The second "sum" is defined inside a block (enclosed in curly braces) and is initialized to 300. When the program prints the value of "sum" inside the block, it refers to the inner "sum" variable, which has the value 300. However, when it prints the value of "sum" outside the block, it refers to the outer "sum" variable, which has the value 40. Therefore, the output is as follows: