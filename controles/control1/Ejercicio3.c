#include <stdio.h>
int main() {
    int l1,l2,l3;
    scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&l3);

    if(l1==l2){
      if(l2==l3){
        printf("es un triangulo equilatero");
      }
      if(l2!=l3){
        printf("es un triangulo isosceles");
      }
    }

    else if(l1==l3){
      if(l2==l3){
        printf("es un triangulo equilatero");
      }
      if(l2!=l3){
        printf("es un triangulo isosceles");
      }
    }
  
    else if(l2==l3){
      if(l2==l1){
        printf("es un triangulo equilatero");
      }
      if(l2!=l1){
        printf("es un triangulo isosceles");
      }
    }
  
    else if(l1!=l2&&l1!=l3&&l2!=l3){
      printf("es un triangulo escaleno");
    }
    return 0;
}