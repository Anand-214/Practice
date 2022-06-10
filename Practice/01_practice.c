#include<stdio.h>
int main()
{
    char option;
    do{
    char a;
    int b;
    float f;
    printf("Enter the character:");
    scanf(" %c", &a);
    printf("The character is %c\n", a);
    printf("The size of %c : %zu\n",a ,sizeof(a));   
    printf("Enter the integer:");
    scanf("%d", &b);
    printf("The integer is %d\n", b);
    printf("The size of %d : %zu\n", b, sizeof(b));
    printf("Enter the float number:");
    scanf("%g", &f);
    printf("The float value is %g\n", f);
    printf("The size of %f : %zu\n", f, sizeof(f));
    printf("The size of short int is : %zu\n", sizeof(short int));
    printf("The size of unsigned int : %zu\n", sizeof(unsigned int));
    printf("The size of signed int : %zu\n", sizeof(signed int));
    printf("The size of signed char : %zu\n", sizeof(signed char));
    printf("The size of unsigned char : %zu\n", sizeof(unsigned char));
    printf("The size of double : %zu\n", sizeof(double));
    printf("The size of long double : %zu\n", sizeof(long double));
    printf("The size of long long : %zu\n", sizeof(long long));
    
    printf("Do you want to continue?:");
    scanf(" %c", &option);
    }while (option == 'y' | option == 'Y');

}
