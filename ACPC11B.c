#include<stdio.h>
#define gc getchar_unlocked
int read_int() {
char c = gc();
while(c<'0' || c>'9') c = gc();
int ret = 0;
while(c>='0' && c<='9') {
ret = 10 * ret + c - 48;
c = gc();
}
return ret;
}
int cmpfuc (const void *a ,const void *b)
{
   return (*(int *)a-*(int *)b);
}
main()
{ 
   int n,m,i,j,t,a[1005],b[1005],min,num;
   t=read_int();
   while(t--)
   {
      min=100000001;
      n=read_int();
      for(i=0;i<n;i++)
        a[i]=read_int();
      m=read_int();
      for(i=0;i<m;i++)
        b[i]=read_int();
      qsort(a,n,sizeof(int),cmpfuc);
      qsort(b,m,sizeof(int),cmpfuc);
      i=j=0;
      while(i<n&&j<m)
       {
           if(a[i]<b[j])
           {
               num=b[j]-a[i];
               if(num<min)
                  min=num;
               i++;
           }
           else
           {
               num=a[i]-b[j];
               if(num<min)
                   min=num;
               j++;
           }
       }
      printf("%d\n",min);
     }
return 0;
}
