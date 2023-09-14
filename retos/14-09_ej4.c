#include <stdio.h>

int main(){

    int matriz1 [2][2];
    int matriz2 [2][2];
    int matrizsum [2][2];
    
    printf("Ingrese matriz 1:\n");
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matriz1[i][j]);
        }
    };

    printf("Ingrese matriz 2:\n");

    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matriz2[i][j]);
        }
    };

    printf("\nmatriz 1:\n");
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            printf("[%d] ",matriz1[i][j]);
        }
        printf("\n");
    };

    printf("\nmatriz 2:\n");
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            printf("[%d] ",matriz2[i][j]);
        }
        printf("\n");
    };

    //suma
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            matrizsum[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    };

        printf("\nmatriz sumada:\n");
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            printf("[%d] ",matrizsum[i][j]);
        }
        printf("\n");
    };

    return 0;
}