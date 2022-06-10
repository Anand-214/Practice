#include <stdio.h>
int main()
{
    int iter;
    iter = 0;
    while (iter < 10)
    {
	printf("%d\n",iter);
	iter++;
    }
    printf("\n");
    iter = 0;
    do
    {
	printf("%d\n",iter);
	iter++;
    }while(iter<10);
    unsigned char a = 'a'+'b';
    printf("%d\n",a);
}
