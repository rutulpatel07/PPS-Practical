#include<stdio.h>
int main(){

    int a = 10 , b = 5 , c = 2, d = 3;
    int r1,r2,r3,r4,r5,r6;

    r1 = a+b/c+d;
    printf("i. a+b/c+d = %d\n",r1);

    r2 = (a+b)*(a-b);
    printf("ii. (a+b)*(a-b) = %d\n",r2);

    r3 = a+b/2;
    printf("iii. a+b/2 = %d\n",r3);

    r4 = (a+b)/(c+d);
    printf("iv. (a+b)/(c+d) = %d\n",r4);

    r5 = a+b*a-b;
    printf("v. a+b*a-b = %d\n",r5);

    r6 = (a+b)/2;
    printf("vi. (a+b)/2 = %d",r6);

    return 0;
}