#include <stdio.h>
#include <stdlib.h>
int main() {
    char lettre[255],lettre2[255];
    int a=0,b=0;
    printf("pour le cryptage 1\npour le decriptage entrer 2 \n ");
    scanf("%d",&b);
    if(b==1){
            printf("entrer le message a crypter :");
            scanf(" %[^\n]",&lettre);
            a= strlen(lettre);
        for(int i=0;i<a;i++){

            if(lettre[i]==32){

                lettre[i]=31;

                }

            if(lettre[i]==122 ){
                lettre[i]=96;

            }
            if(lettre[i]==90 ){
                lettre[i]=64;

            }
            printf("%c",lettre[i]+1);


        }
    }
    if(b==2){
        printf("entrer le message a decrypter :");
        scanf(" %[^\n]",&lettre2);
        a= strlen(lettre2);
        for(int i=0;i<a;i++){
                if(lettre2[i]==32){
                    lettre2[i]=33;

                }

            if(lettre2[i]==65 ){
                lettre2[i]=91;

            }
            if(lettre2[i]==97 ){
                lettre2[i]=123;

            }

            printf("%c",lettre2[i]-1);


        }
    }


   return 0;
}
