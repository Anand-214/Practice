#include<stdio.h>
int main()
{
    int inp,N;
    printf("Enter the power till the series needs to be genereted:");
    scanf("%d", &inp);
    printf("Enter N:");
    scanf("%d", &N);
    int res = N;
    printf("Power of %d series:\n", N);
    for ( int i = 1; i <= inp; i++)
    {
	printf("%d^%d : %d\n",N ,i, res);
	res = N * res;
    }	
}
