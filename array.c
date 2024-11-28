
#include<stdio.h>
int main()
{

int i, a[5]={2,8,5,4,1};

for(i=1;i<4;i++)
{
if (a[0]>a[i])
{
int temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
for(i=0;i<5;i++)
{
printf("value of array is:%d\n",a[i]);  
}
return 0;
}


