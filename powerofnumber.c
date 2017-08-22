#include <stdio.h>
#include<math.h>
int main()
{
int number,base,power;
scanf("%d",&number);
scanf("%d",&base);
power=pow(number,base);
printf("power of the number=%d",power);
return 0;
}
