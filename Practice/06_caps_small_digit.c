#include<stdio.h>
int main()
{
   char input;
   printf("Enter the character to check:");
   scanf(" %c", &input);
   if ( input >= 65 && input <= 90)
   {
       printf("Its a capital letter");
   }
   else if (input >= 97 && input <= 122)
   {
       printf("Its a small letter");
   }
   else if (input >= 48 && input <= 57)
   {
       printf("Its a digit letter");
   }
   else
   {
       printf("None of these");
   }
}
