#include <stdio.h>

typedef struct{
    char nomJRN[12];
    int prixJRN;
    int quantiteJRN;
}JRN;

typedef struct{
    char nomTAB[12];
    int prixTAB;
    int quantiteTAB;
}TAB;


int main()
{
    int choix,choix2,choix3,choix4,choix6,choix7,choix8;

    JRN JRN[3];
    TAB TAB[3];
  do
    {
    printf("1 === ajout de marchandise en stock ======\n");
    printf("2 === vente marchandise ==================\n");
    printf("9 === quitter le programme ===============\n");
    printf("votre choix : ");
    scanf("%d",&choix);

     do
    {
        if (choix==1)
        {
        printf("11 ====== ajout Tabac ==================\n");
        printf("12 ====== ajout Journaux ===============\n");
        printf("13 ====== Retour menu precedent ========\n");
        printf("votre choix : ");
        scanf("%d",&choix2);
          do
         {
          if(choix2==11)
          {
              printf("111 === Marlboro ==================\n");
              printf("112 === Mar =======================\n");
              printf("116 === Retour menu precedent =====\n");
              printf("votre choix : ");
              scanf("%d",&choix3);

              if(choix3==111)
              {
                 printf("entrez la quantite de Marlboro : ");
                 scanf("%d",TAB[3].quantiteTAB);
              }
              else if (choix3==112)
              {
                 printf("entrez la quantite de Mar : ");
                 scanf("%d",TAB[3].quantiteTAB);
              }

          }

         }while(choix3!=116);


        }

    }while(choix2!=13);

    }while(choix!=9);


    return 0;
}
/* do
         {
           if(choix2==12)
           {
               printf("121 === Al-Massae====================================\n");
               printf("126 === Retour menu precedent =======================\n");
               printf("votre choix : ");
               scanf("%d",&choix8);
               if (choix8==121)
               {
                   printf("ENTER QUANTITe de Al-Massae   : ");
                   scanf("%d",&JRN[3].quantiteJRN);
               }

           }
         }while(choix2!=126); */


/*do
    {
        if(choix==2)
       {
            printf("21 === Vente Tabac =================================\n");
            printf("23 === Retour menu precedent =======================\n");
            printf("votre choix : ");
            scanf("%d",&choix6);
            do
            {
                if (choix6==21)
                {
                   printf("211 === Marlboro ==============================\n");
                   printf("216 === Retour menu precedent =================\n");
                   printf("votre choix : ");
                   scanf("%d",&choix7);
                   if (choix7==211)
                   {
                       printf("ENTER QUANTITe de Marlboro   : ");

                   }

                }
            }while(choix7!=216);
        }
   }while(choix6!=23);*/

