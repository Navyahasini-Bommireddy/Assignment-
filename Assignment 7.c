#include <stdio.h>
int main()
{
int userId ,password ;
int stored_userId =253;
int stored_password =67810;
printf ("enter userId:");
scanf("%d",&userId);
if (userId != stored_userId)
{
printf ("username  not found");
}
else 
{
printf ("enter password:");
scanf("%d",& password);
 if (password == stored_password)
 {
    printf ("login successfully ");
    }
    else{
    printf ("incorrect password ");
    }
 } 
  


}

