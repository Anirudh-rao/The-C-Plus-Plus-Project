#include <stdio.h>
int main()
{
    float number1 = 13.5;
    double number2 = 12.4;
    char chr = 'a';    
    printf("character = %c", chr); 

    printf("number1 = %f\n", number1);
    printf("number2 = %lf", number2);
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);
    int a;
    float b;

    printf("Enter integer and then a float: ");
  
    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);  
    
    return 0;


}