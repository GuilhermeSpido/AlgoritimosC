
#include <stdio.h>
#include <math.h>
void main()
{
         int hi,mi,hf,mf;
         int dif,h,m;
         printf("Hora e minuto inicial do evento:");
         scanf("%d%d",&hi,&mi);

         printf("Digite o horario final do evento;");
         scanf("%d%d",&hf,&mf);
         mi=hi*60+mi;
         mf=hf*60+mf;

         dif=mf-mi;
         h= dif/60;
         m=dif% 60;
         printf("%d%d\n",h,m);
         

}