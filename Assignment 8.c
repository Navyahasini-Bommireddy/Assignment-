#include <stdio.h>
int main()
{
int age,creditscore;
float monthlyincome;

printf ("enter age :");
scanf("%d",&age );
if (age<21|| age>60)

{
printf ("loan rejected age is not in 21 to 60");
}
else 
{
  printf ("enter monthlyincome:");
  scanf("%f ",& monthlyincome);
     if (monthlyincome < 25000)
       {
          printf ("loan rejected income below 25000");
       }
     else
     {
         printf (" enter creditscore ");
         scanf("%d",& creditscore );
         if ( creditscore <700)
         {
             printf ("loan rejected:creditscore below 700");
         }
         else 
         {
             printf ("loan approvaed");
         }
     }
}
 return 0;
  


}

