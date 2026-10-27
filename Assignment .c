#include <stdio.h>
int main()
{
  int a;
  char op;
printf ("\n enter the value of a:");
scanf("%d",&a);
if(a>0)
printf ("\n %d is positive:",a);
else if (a<0)
printf ("\n%d is negative:",a);
else 
printf ("zero \n");
return 0;
}

