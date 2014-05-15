#include<stdio.h>
#include<math.h>
main()
{
   int n,ans=0,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
               ans++;
        }
   }
  printf("%d\n",ans);
  return 0;
}
