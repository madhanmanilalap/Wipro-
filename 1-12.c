#include<stdio.h>
int main()
{
int c,a[100],b[100],i,d=0,e;
printf("Enter the Size of the array:");
scanf("%d",&c);
e=c;
printf("Enter the Elements in the Array1:");
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the Elements in the Array2:");
for(i=0;i<c;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<c;i++)
{
if(a[c-1]==b[i])
{
d++;
}
c--;
}
if(d==e)
{
printf("Yes");
}
else
printf("No");
}
