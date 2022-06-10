#include<stdio.h>
int main()
{
    char option;
    do{
    int percent;
    printf("Enter the percentage:");
    scanf("%d", &percent);
    if (percent >= 80)
    {
	printf("Your grade is A+\n");
    }	
    else if (percent <= 79 && percent >= 60) 
    {
	printf("Your grade is A\n");
    }
    else if (percent <= 59 && percent >= 35) 
    {
	printf("Your grade is B\n");
    }
    else
    {
	printf("You failed!! Try hard next time!!\n");
    }
    printf("Continue?:");
    scanf(" %c", &option);
    }while(option == 'y' || option == 'Y');
}
