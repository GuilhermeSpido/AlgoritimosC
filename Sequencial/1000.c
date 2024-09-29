#include <stdio.h>
#include <math.h>

void main(){
         int n,d1,d2,d3,d4,s;
         printf("Valor:\n");
         scanf("%d",&n);
         d1=n/1000;
         d2=(n%1000)/100;
         d3=(n%100)/10;
         
         d4=n%10;
         d1=d1+d2+d3+d4;
         printf("Soma:%d\n",d1);
         
         
         
}
