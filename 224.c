#include<stdio.h>
int main()
{
int s,a[100],c=0,i;
printf("Enter the Size:");
scanf("%d",&s);
printf("Enter the Elements:");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
if(a[i]<0)
{
c+=a[i];
}
}
printf("%d",c);
return 0;
}
