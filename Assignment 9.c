#include <stdio.h>
int main()
{
float orderamount ,discount=0.0,delivery_charge=0.0,finalamount;
int membership_type;
printf("enter  orderamount :");
scanf("%f",&orderamount);
printf ("enter membership_type( 1 for premium, 0 for regular)");
scanf("%d", & membership_type);
if (orderamount >=500)
{
   delivery_charge=0;
    if( membership_type ==1)
      {
         discount =0.10*orderamount ;
      }
    else
    {
          discount =0;
    }
}

else
{
delivery_charge=50;
discount =0;
} 
finalamount = orderamount -discount + delivery_charge;
printf (" final payable amount:%.2f",finalamount );

 return 0;
  


}

