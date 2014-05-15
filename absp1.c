#include<stdio.h>
main()
{
    int t,n,i;
    long long int c[10005]={0},a[10005],ans=0;
    scanf("%d",&t);
    while(t--)
    {
       ans=0;
       for(i=0;i<10005;i++)
            c[i]=0;
       scanf("%d",&n);
       for(i=0;i<n;i++)
        {
          scanf("%lld",&a[i]);
        }
       for(i=1;i<n;i++)
        {
          c[i]=i*(a[i]-a[i-1])+c[i-1];
        }
        
       for(i=1;i<n;i++)
         {
             ans=ans+c[i];
         }
        printf("%lld\n",ans);
      }
  return 0;
}
