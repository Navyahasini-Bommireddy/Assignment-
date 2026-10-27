#include <stdio.h>
int main()
{
float length,breadth,Area,perimeter;
printf ("\n enter length and breadth:");
scanf("%d%d",&length,&breadth);
Area= length*breadth;
perimeter =2*(length+breadth);
printf ("Area=%.2fand perimeter=%.2f",Area,perimeter);
return 0;
}

