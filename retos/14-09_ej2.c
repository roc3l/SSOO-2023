#include <stdio.h>
#include <string.h>
int main()
{
    char nombres[5][20];

    printf("ingrese 5 nombres:\n");

    for (int a=0;a<5;a++){
        scanf("%s",&nombres[a]);
    }

    printf("\nLos nombres ingresados fueron:\n");

    for (int a=0;a<5;a++){
        printf( "nombre %d: %s\n",a+1, nombres[a]);
    }

    return 0;
}