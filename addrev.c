#include<stdio.h>
int rev(int n)
{
    int num=0,r;
    while(n!=0)
     {
        r=n%10;
        num=10*num +r;
        n=n/10;
      }
  return num;
}
main()
{
   int t,ans,a,b;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d%d",&a,&b);
      a=rev(a);
      b=rev(b);
      ans=a+b;
      ans=rev(ans);
      printf("%d\n",ans);
    }
  return 0;
}
