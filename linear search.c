

#include<stdio.h>
int main()
{

int i, a[5]={36,40,5,38,12};

for(i=1;i<5;i++)
{
if (a[0]>a[i])
{
int temp=a[0];
a[0]=a[i];
a[i]=temp;
}
}
for(i=0;i<4;i++)
{  
 for (int j=i;j<5;j++)
 {
  if(a[i]>a[j])
  {
   int temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
}
for(int j=0;j<5;j++)
{
printf("value of array is:%d\n",a[j]);
}

int num;
scanf("%d",& num); 
for(int i=0;i<5;i++)
{
if (num==a[i])

{

printf("number exist :%d",a[i]);
}
}

return 0;
}

