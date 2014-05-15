#include<stdio.h>
main()
{
    int x,y,z,d,rem,r;
    scanf("%d%d%d",&x,&y,&z);
    while(x||y||z)
    {
       d=y-x;
       if(d==z-y)
         {
            printf("AP %d\n",z+d);
         }
       if(x!=0)
         {r=y/x ;
          rem=y%x;}
       if(y!=0&&z/y==r&&z%y==0&&rem==0)
           {
              printf("GP %d\n",z*r);
           }
       scanf("%d%d%d",&x,&y,&z);
     }
   return 0;
}
       
