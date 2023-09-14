#include <stdio.h>
#include <string.h>
int main()
{
    char nombres[5][20] = {"jose","sebastian","deim","leandroini","bef"};

    for (int a=0;a<5;a++){
        printf( "\nnombre %d: %s\n",a+1, nombres[a]);
    }

}