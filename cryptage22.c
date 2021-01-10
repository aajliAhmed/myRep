#include <stdio.h>
#include <stdlib.h>
int main() {

    char lettre[255];
    int a=0;
    printf("entrer le message :");
    scanf("%[^\n]",&lettre);
    a= strlen(lettre);

       for(int i=0;i<a;i++){


            if(lettre[i]==122){
                //printf("%d",i);
                lettre[i]=96;

            }
            printf("%c",lettre[i]+1);
        }



   return 0;
}
