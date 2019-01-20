#include<stdio.h>
#include<conio.h>
void main()
{
int n,num;
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num");
for(i=2;i<num/2;i++)
{
if(num%i==0)
{
flag=1;
}
}
if(flag==0)
{
printf("prime");
}
else
{
printf("not");
}
n--;
}getch();
}
