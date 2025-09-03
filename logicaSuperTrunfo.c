#include <stdio.h>
#include <time.h>
#include <stdlib.h>

    int main(){
        int pturisticos1,pturisticos2,populacao1, populacao2,opçao;
        float areakm1,areakm2,pib1,pib2,dens1,dens2;
        char pais1[30],pais2[30];
         
      
        //CARTA 1
          printf("Digite O Nome Do Pais:\n");
          scanf("%s" ,&pais1);

          printf("Digte a população:\n");
          scanf("%d" ,&populacao1);

          printf("Digite a Àrea:\n");
          scanf("%f" ,&areakm1);
  
          printf("Digite PIB:\n");
          scanf("%f" ,&pib1);

          printf("Digite o numero de pontos turisticos:\n");
          scanf("%d" ,&pturisticos1);
          
          dens1 = (float)populacao1/areakm1;
          

        //CARTA 2
         printf("Digite o 2 Pais:\n");
          scanf("%s" ,&pais2);


          printf("Digte a população:\n");
          scanf("%d" ,&populacao2);

          printf("Digite a Àrea:\n");
          scanf("%f" ,&areakm2);
  
          printf("Digite PIB:\n");
          scanf("%f" ,&pib2);

          printf("Digite o numero de pontos turisticos:\n");
          scanf("%d" ,&pturisticos2);

          dens2 = (float)populacao2/areakm2;
          
          

          //RESULTADO CARTA 1
            printf("###Carta1###\n");
            printf("Pais: %s \n",pais1);
            printf("1.População: %d \n",populacao1);
            printf("2.Area: %.3f km²\n",areakm1);
            printf("3.PIB: %f BILHOES\n",pib1);
            printf("4.Pontos turisticos:%d \n",pturisticos1);
            printf("5.Densidade Demografica:\n%2.f\n",dens1);
         //RESULTADO CARTA 2
            printf("###Carta2###\n");
            printf("Pais: %s \n",pais2);
            printf("1.População: %d \n",populacao2);
            printf("2.Area: %.3f km²\n",areakm2);
            printf("3.PIB: %f  BILHOES\n",pib2);
            printf("4.Pontos turisticos:%d \n",pturisticos2);
            printf("5.Densidade Demografica:\n%2.f\n",dens2);
        //Escolha de qual atibuto vai ser comparado
            printf("Digite o Numero Do Atributo Qual Deseja Ser Comparado:\n");
            printf("1 - População:\n");
            printf("2 - Area:\n");
            printf("3 - Pib:\n");
            printf("4 - Pontos Turistico:\n");
            printf("5 - Densidade Demografica:\n");
            scanf("%d", &opçao);

//menu do jogo com a logica em cada case             

            switch (opçao)
            {
            case 1: 
              printf("O atributo de comparação escolhido foi: POPULAÇÃO.\n ");
                if(populacao1 > populacao2){
                printf("POPULAÇÃO_1 - %d\n POPOLAÇÃO_2 - %d\n",populacao1,populacao2);
                printf("Carta 1 venceu, pais:%s\n",pais1);
                  } else if (populacao1 == populacao2)
                  {
                    printf("###O JOGO EMPATOU###");
                  }
                  
                   else {
                      printf("POPULAÇÃO_1 - %d\n POPULAÇÃO_2 - %d\n",populacao1,populacao2);
                      printf("Carta 2 venceu, pais:%s\n",pais2);}
            break;
            case 2:
              printf("O atributo de comparação escolhido foi: AREA.\n ");
                if(areakm1 > areakm2){
                printf("AREA KM_1 - %3.f\n AREA KM_2 - %3.f\n",areakm1,areakm2);
                printf("Carta 1 venceu, pais:%s\n",pais1);
                  } 
                  else if (areakm1 == areakm1)
                  {
                    printf("###O JOGO EMPATOU###");
                  }
                  else {
                      printf("AREA KM_1 - %3.f\n AREA KM_2 - %3.f\n",areakm1,areakm2);
                      printf("Carta 2 venceu, pais:%s\n",pais2);}
            break;
              case 3:
              printf("O atributo de comparação escolhido foi: PIB.\n ");
               if(pib1 > pib2){
               printf("PIB_1 - %f\n PIB_2 - %f\n",pib1,pib2);
               printf("Carta 1 venceu, pais:%s\n",pais1);
                 } 
                 else if (pib1 == pib2)
                  {
                    printf("###O JOGO EMPATOU###");
                  }
                 else {
                       printf("PIB_1 - %f\n PIB_2 - %f\n",pib1,pib2);
                       printf("Carta 2 venceu, pais:%s\n",pais2);}
            break;
              case 4:
              printf("O atributo de comparação escolhido foi: PONTOS TURISTICOS.\n ");
               if(pturisticos1 > pturisticos2){
               printf("PONTOS TURISTICOS_1 - %d\n PONTOS TURISTICOS_2 - %d\n",pturisticos1,pturisticos2);
               printf("Carta 1 venceu, pais:%s\n",pais1);
                  }
                  else if (pturisticos1 == pturisticos2)
                  {
                    printf("###O JOGO EMPATOU###");
                  }
                  else {
                       printf("PONTOS TURISTICOS_1 - %d\n PONTOS TURISTICOS_2 - %d\n",pturisticos1,pturisticos2);
                       printf("Carta 2 venceu, pais:%s\n",pais2);}
              break;
              case 5:
              printf("O atributo de comparação escolhido foi: DENSIDADE DEMOGRAFICA.\n ");
               if(dens1 < dens2){
               printf("DENSIDADE DEMOGRAFICA_1 - %3.f\n DENSIDADE DEMOGRAFICA_2 - %3.f\n",dens1,dens2);
               printf("Carta 1 venceu, pais:%s\n",pais1);
                  }
                  else if (dens1 == dens2)
                  {
                    printf("###O JOGO EMPATOU###");
                  }
                  else {
                       printf("DENSIDADE DEMOGRAFICA_1 - %3.f\n DENSIDADE DEMOGRAFICA_2 - %3.f\n",dens2,dens2);
                       printf("Carta 2 venceu, pais:%s\n",pais2);}
              break;
            
            default:
            printf("***OPÇÃO INVALIDA***");
            
            }
            

        return 0;
    }











       
















            
          
