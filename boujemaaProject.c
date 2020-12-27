//***************************************************************************/
#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nomModule[55];
    int noteDeModule;
}module;
typedef struct {
char nom[10];
char prenom[10];
int annee;
int redoublant;
module modules[7];

}eleve;
int main(){
int choix;
int i=0,y=0;
eleve eleve[3];
     for(i =0;i<3;i++)
        {
printf("entrez nom eleve  %d  : \n",i+1);
scanf("%s",&eleve[i].nom);
printf("entrez prenom eleve %d: \n",i+1);
scanf("%s",&eleve[i].prenom);
printf("entrez annee  eleve %d : \n",i+1);
scanf("%d",&eleve[i].annee);
printf("entrez redoublant oui=1 non=0 : \n");
scanf("%d", &eleve[i].redoublant);

      for(y=0;y<7;y++)
        {
          printf("entrer le nom de module %d :\n",y+1);
          scanf("%s",&eleve[i].modules[y].nomModule);
           printf("entrer la note de module %s :",eleve[i].modules[y].nomModule);
           scanf("%d",&eleve[i].modules[y].noteDeModule);
         }
    }
      do {

printf("---- menu ---\n");
printf("0 == pour afficher les informations de tout les eleves\n");
printf("1 == informations eleve 1\n");
printf("2 == informations eleve 2\n");
printf("3 == informations eleve 3\n");
printf("4 == le/les eleves réussis\n");
printf("5 == note par module eleve 1\n");
printf("6 == note par module eleve 2\n");
printf("7 == note par module eleve 3\n");
printf("8 == quitter le programme\n");
printf("choiser votre choix : ");
scanf("%d",&choix);
 if(choix==0){

     for(int i=0;i<3;i++){
         printf("les informations de M.%s :\n",eleve[i].nom);
         printf("le prenom : %s \n",eleve[i].prenom);
         printf("annee de naissance : %d :\n",eleve[i].annee);
         //printf("les informations de M.%d :\n",eleve[i].redoublant);
         if (eleve[i].redoublant==0){
             printf("non redoublant\n");
         }
         else {
             printf("redoublant\n");
         }
     }
 }
 else if (choix==1)
 {
     printf("les informations de M.%s\n",eleve[1].nom);
     printf("le prenom : %s :\n",eleve[1].prenom);
     printf("annee de naissance : %d\n",eleve[1].annee);

     if (eleve[1].redoublant==0){
             printf("non redoublant\n");
         }
         else {
             printf("redoublant\n");
         }

     }

  else if (choix==2)
 {
     printf("les informations de M.%s\n",eleve[2].nom);
     printf("le prenom : %s :\n",eleve[2].prenom);
     printf("annee de naissance : %d\n",eleve[2].annee);

     if (eleve[2].redoublant==0){
             printf("non redoublant\n");
         }
         else {
             printf("redoublant\n");
         }

     }
  else if (choix==3)
 {
     printf("les informations de M.%s\n",eleve[3].nom);
     printf("le prenom : %s :\n",eleve[3].prenom);
     printf("annee de naissance : %d\n",eleve[3].annee);

     if (eleve[3].redoublant==0){
             printf("non redoublant\n");
         }
         else {
             printf("redoublant\n");
         }

     }
 else if (choix==4){
     for(int i=0;i<3;i++)
    {int somme=0;
    float moyenne;
    for(int M=0;M<7;M++)
    {
        somme=somme+eleve[i].modules[M].noteDeModule;
    }
        moyenne=somme/7;
        if(moyenne>=10){
            printf("M %s a reussi avec %f \n",eleve[i].nom,moyenne);
        }
    }


 }
 else if (choix==5)
 {
    for(int i=0;i<7;i++){
        printf("note de module %s : %d",eleve[0].modules[i].nomModule,eleve[0].modules[i].noteDeModule);
    }

 }
 else if (choix==6)
 {
    for(int i=0;i<7;i++){
        printf("note de module %s : %d",eleve[1].modules[i].nomModule,eleve[1].modules[i].noteDeModule);
    }

 }
 else if (choix==7)
 {
    for(int i=0;i<7;i++){
        printf("note de module %s : %d",eleve[2].modules[i].nomModule,eleve[2].modules[i].noteDeModule);
    }

 }

}while(choix!=8);





return 0;
 }
