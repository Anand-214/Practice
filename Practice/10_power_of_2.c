#include<stdio.h>
int main()
{
    int inp;
    printf("Enter the power till the series needs to be genereted:");
    scanf("%d", &inp);
    int res = 2;
    printf("Power of 2 series:\n");
    for ( int i = 1; i <= inp; i++)
    {
	printf("2^%d : %d\n",i, res);
	res = 2 * res;
    }	
}
