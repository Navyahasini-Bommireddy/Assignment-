#include <stdio.h>
int main()
{
float weight,height, BMI;
printf ("\n enter weight (in kgs):");
scanf("%f",&weight);
printf ("enter height (in mts):");
scanf("%f",&height);
BMI=weight/(height *height);
printf("BMI value:%.2f\n",BMI);
if(BMI <18.5)
printf ("category:underwt")
else if (BMI >=18.5&&BMI <25)
printf ("category:overweight ");
else 
printf ("category:obese");
return 0;
}

