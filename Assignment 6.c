#include <stdio.h>
int main()
{
int marks ;
printf ("\n enter marks out of 100:");
scanf("%d",&marks);
if(marks < 0|| marks >100)
{
printf ("invalidmarks");
}
else if (marks >=90 && marks<=100)
{
printf ("Grade:O ");
}
else if (marks>=80 && marks<=89)
{
printf("Grade:A+");
}
else if (marks>=70 && marks <=79)
{
printf ("Grade:A");
}
else if (marks>=60 && marks <=69)
printf ("Grade:B");
}
else if(marks >=50 && marks<=59)
{
printf ("Grade:C");
}
else
printf ("Grade:fail");

return 0;
}

