#include <stdio.h>
#include<math.h>
int main()
{
int number,base,power;
printf("Enter the number:");
scanf("%d",&number);
printf("Enter the base:");
scanf("%d",&base);
power=pow(number,base);
printf("power of the number=%d",power);
return 0;
}
