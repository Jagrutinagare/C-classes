
#include<stdio.h>
int main()
{

int i, a[5]={2,8,5,4,1};

for(i=1;i<5;i++)
{
if (a[0]>a[i])
{
int temp=a[0];
a[0]=a[i];
a[i]=temp;
}
}
for(i=0;i<5;i++)
{
printf("value of array is:%d\n",a[i]);  
}
return 0;
}










