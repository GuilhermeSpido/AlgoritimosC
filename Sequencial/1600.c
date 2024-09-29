#include<stdio.h>
#include<math.h>

void main()
{         
         int n,d1,d2,d3,d4,d5,d6,s;
         printf("Valor em binario:\n");
         scanf("%d",&n);
         d6=n%10;
         d6=d6*1;
         n=n/10;
         d5=n%10;
         d5=d5*2;
         n=n/10;
         d4=n%10;
         d4=d4*4;
         n=n/10;
         d3=n%10;
         d3=d3*8;
         n=n/10;
         d2=n%10;
         d2=d2*16;
         n=n/10;
         d1=n*32;
         s=d1+d2+d3+d4+d5+d6;

         printf("Soma:%d",s);

}