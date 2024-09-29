#include<stdio.h>
void main()
{
         int he,hs,hf;
         float vh,vf;
         
         printf("Digite o valor hora:\n");
         scanf("%f",&vh);
         
         printf("Digite a hora de entrada:\n");
         scanf("%d",&he);
         
         printf("Digite a hora de saida:\n");
         scanf("%d",&hs);

         

         if(hs<=20){
                  vf=(hs-he)*vh;
         }
         else if(he>=20 && hs>20){
                  vf=(20-he)*vh+(hs-20)*vh*1.2;
         }
         else{
                  vf=(hs-he)*vh*1.2;
         }
         printf("Final: %f\n",vf);
}