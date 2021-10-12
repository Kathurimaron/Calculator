#include <stdio.h>
#include<stdlib.h>

int main(){

    int num1, num2;
    int sum, diff, pro, mod;
    float quot;

    //assigning values
    num1 = 200;
    num2 = 56;

    //computation
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    quot = (float)num1 / num2;
    mod = num1 % num2;

    printf("Sum: %i + %i = %i \n",num1, num2, sum);
    printf("Diffrence: %i - %i = %i \n",num1, num2, diff);
    printf("Product: %i * %i = %i \n",num1, num2, pro);
    printf("quatient: %i / %i = %f \n",num1, num2, quot);
    printf("Remainder: %i mod %i = %i \n",num1, num2, mod);

    return 0;
}
