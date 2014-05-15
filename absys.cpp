#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,num1,num2,num3,l1,l2,l3,x,y,z,p1=0,p2=0,p3=0;
    char str[100];
    char *p,*str1,*str2;
    cin>>t;
    while(t--)
    {
       p1=p2=p3=0;
       cin >>str;
       p=strtok(str,"+");
       str1=strtok(NULL,"="); 
       str2=strtok(NULL,"=");
      // printf("%d\n%d\n%d\n",l1,l2,l3);
       num1=atoi(p);
       num2=atoi(str1);
       num3=atoi(str2);
       x=num1,y=num2,z=num3;
       while(x!=0)
         {
              p1++;
              x=x/10;
         }
        while(y!=0)
         {
              p2++;
              y=y/10;
         }
         while(z!=0)
         {
              p3++;
              z=z/10;
         }
        if(l1!=p1)
         {
            num1=num3-num2;
         }
        else if(l2!=p2)
         {
            num2=num3-num1;
         }
        else
         {
            num3=num1+num2;
         }
       printf("%d + %d =%d\n",num1,num2,num3);
    }
       return 0;
}
