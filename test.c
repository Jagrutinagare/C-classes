#include<stdio.h>
int main()
{
int x=3,y=10,temp;
temp=x;
x=y;y=temp;

printf("%d\n%d\n",x,y);
return 0;
}
