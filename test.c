#include<stdio.h>
int main()
{
int x;
printf("enter the value of x");
scanf("%d",&x);
if(x>0)
{
printf("the number is positive");
}
else
{
printf("the number is negative");
}
int y=(x%10);
{
printf("unit place is %d", y);
}
int z=(x/10)%10;
{
printf("tens place is %d",z);
}
int a=(x/100);
{
printf("hundred place is %d",a);
}
int sum=(y+z+a);
{
printf("sum of all digit is %d",sum);
}
while (x>0)
{
int temp = x%10;
int k = x/10;
x=k;
printf("value of temp is : %d\n",temp);
printf("%d\n",k);
}
return 0;
}

