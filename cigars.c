#include<stdio.h>
#include<stdlib.h>
void main()
{
int cigars;
int weekend;
printf("enter the no.of cigars \n");
scanf("%d%d",&cigars);
printf("enter 1 for weekend \t 0 for not weekend");
scanf("%d",&weekend);
if(weekend)
{
if(cigars>=40)
{
printf("true");
}
else
{
   printf("false");
   }
   }
   else
   {
   if(cigars>=40&& cigars<=60)
   {
   printf("true");
   }
   else
   {
   printf("false");
   }
   }
   }