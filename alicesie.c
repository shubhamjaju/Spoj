#include<stdio.h>
main()
{
  int t,n,ans;
  scanf("%d",&t);
  while(t--)
  {
     scanf("%d",&n);
     if(n%2==0)
        ans=n/2;
     else
        ans=(n+1)/2;
    printf("%d\n",ans);
  }
}
     

