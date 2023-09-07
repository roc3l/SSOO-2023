#include <stdio.h>
int main() {
    int a=0;
    int sum=0;
    printf("sumando los valores de:");
    for (a=1;a<=100;a=a+2){
        printf(" %d",a);
        sum=sum+a;

    }
    printf("\nel resultado final es %d",sum);
    return 0;
}