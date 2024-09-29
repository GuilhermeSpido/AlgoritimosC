#include<stdio.h>
#include<math.h>

void main()
{
         int ts,s,m,h;
         printf("Total de segundos:\n");
         scanf("%d",&ts);
         h=ts/3600;
         ts=ts%3600;
         m=ts/60;
         s=ts%60;
         printf("%d Horas %d minutos %d segundos ",h,m,s);
         

}