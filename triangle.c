
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("entrer nombre de ligne :");
    scanf("%d",&n);
      for(int i=0;i<n;i++){
            for(int j=n-1-i;j>0;j--){
                printf(" ");
            }
            for(int k=0;k<=i*2;k++){
                printf("*");
            }
        printf("\n");
      }
      return 0;
}
