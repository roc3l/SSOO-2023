#include <stdio.h>
int main() {
    int l1,l2,l3,pro;
    scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&l3);

    pro=l1*0.4+l2*0.3+l3*0.3;
    if(pro<3.95){
        printf("reprobado");
    }
    else if(pro>=4.95){
        printf("eximido");
    }
    else{
        printf("examen");
    }

    return 0;
}