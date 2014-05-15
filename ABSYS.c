#include<stdio.h>
#include<string.h>
main()
{
   int t,i,k,l,l1,l2,l3,p1,p2,p3,num1,num2,num3,x,y,z;
   char str[100009],c[100010];
   scanf("%d",&t);
   while(t--)
   {
     p1=0,p2=0,p3=0,l1=0,l2=0,l3=0,l=0;
     num1=0,num2=0,num3=0;
     memset(&str[0],'\0',100000);
     scanf(" %[^\n]s",str);
     l=strlen(str);
     memset(&c[0],'\0',100000);
     i=0,k=0;
     while(str[i]!='+')
      {
         if(str[i]==' ')
            i++;
         else
           {
              c[k]=str[i];
              k++;
              i++;
           }
      }
      num1=atoi(c);
      l1=strlen(c);
      memset(&c[0],'\0',10000); 
      k=0;
      while(str[i]!='=')
      {
         if(str[i]==' '||str[i]=='+')
            i++;
         else
           {
              c[k]=str[i];
              k++; 
              i++; 
           }
      }
      num2=atoi(c);
      l2=strlen(c);
      memset(&c[0],'\0',10000); 
      k=0;
      while(i<l || str[i]!='\0')
      {
         if(str[i]==' '||str[i]=='=')
            i++;
         else
           {
              c[k]=str[i];
              k++;
              i++;
           }
      }
      num3=atoi(c);
      l3=strlen(c);
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
         num1=num3-num2;
      else if (l2!=p2)
         num2=num3-num1;
      else if(l3!=p3)
         num3=num1+num2; 

       printf("%d + %d = %d\n",num1,num2,num3);
   }
return 0;
}
