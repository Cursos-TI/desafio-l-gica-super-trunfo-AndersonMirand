#include <stdio.h>

    int main(){
        int pturisticos1,pturisticos2,populacao1, populacao2;
        float areakm1,areakm2,pib1,pib2;
        char codcarta1[50],codcarta2[50];
        char estado1[30],estado2[30];
        char nomecidade1[50],nomecidade2[50]; 
      
        //CARTA 1
          printf("Digite o estado:\n");
          scanf("%s" ,&estado1);

          printf("Digite codigo da carta:\n");
          scanf("%s" ,codcarta1);

          printf("Nome da cidade:\n");
          scanf("%s" ,&nomecidade1);

          printf("Digte a população:\n");
          scanf("%d" ,&populacao1);

          printf("Digite a Àrea:\n");
          scanf("%f" ,&areakm1);
  
          printf("Digite PIB:\n");
          scanf("%f" ,&pib1);

          printf("Digite o numero de pontos turisticos:\n");
          scanf("%d" ,&pturisticos1);

        //CARTA 2
         printf("Digite o 2 estado:\n");
          scanf("%s" ,&estado2);

          printf("Digite codigo da 2 carta:\n");
          scanf("%s" ,codcarta2);

          printf("Nome da 2 cidade:\n");
          scanf("%s" ,&nomecidade2);

          printf("Digte a população:\n");
          scanf("%d" ,&populacao2);

          printf("Digite a Àrea:\n");
          scanf("%f" ,&areakm2);
  
          printf("Digite PIB:\n");
          scanf("%f" ,&pib2);

          printf("Digite o numero de pontos turisticos:\n");
          scanf("%d" ,&pturisticos2);
/*
   (DEIXEI COMENTADO POIS NAO SABIA SE ERA PRA EXIBIR OU NÃO MAS POSSO PRECISAR DESSE CODIGO NO FUTURO NÃO QUIS APAGAR)
          //RESULTADO CARTA 1
            printf("Carta1:\n");
            printf("Estado: %s \n",estado1);
            printf("Codigo da carta: %s \n",codcarta1);
            printf("Nome da cidade:%s \n",nomecidade1);
            printf("Area: %.3f km²\n",areakm1);
            printf("População: %d \n",populacao1);
            printf("PIB: %f BILHOES\n",pib1);
            printf("Pontos turisticos:%d \n",pturisticos1);
       
         //RESULTADO CARTA 
            printf("Carta2:\n");
            printf("Estado: %s \n",estado2);
            printf("Codigo da carta: %s \n",codcarta2);
            printf("Nome da cidade:%s \n",nomecidade2);
            printf("População: %d \n",populacao2);
            printf("Area: %.3f km²\n",areakm2);
            printf("PIB: %f  BILHOES\n",pib2);
            printf("Pontos turisticos:%d \n",pturisticos2);
*/
       //COMPARÇÃO DO REQUISITO PONTO TURISTICO
            if (pturisticos1 > pturisticos2)
            {
              printf("Carta 1 - %s: %d Pontos Turisticos.\n", estado1,pturisticos1);
              printf("Carta 2 - %s: %d Pontos Turisticos.\n", estado2,pturisticos2);
              printf("Carta 1 - %s: Venceu!!!",estado1);
            }
            else{
              printf("Carta 1 - %s: %d Pontos Turisticos.\n", estado1,pturisticos1);
              printf("Carta 2 - %s: %d Pontos Turisticos.\n", estado2,pturisticos2);
              printf("Carta 2 - %s: Venceu!!!",estado2);
            }


        return 0;
    }