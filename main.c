#include <stdio.h>

int main() {

    int n1=0, n2=0, i=0, pares=0;

    printf("Ingrese un rango de dos valores, separados por un espacio, para poder calcular\nla cantidad de n%cmeros pares que hay en medio: ",163);
    scanf("%i %i",&n1,&n2);
    fflush(stdin);

    for (i=n1;i<n2+1;i++){
        if (i % 2 == 0){
            pares = pares + 1;
        }
    }

    printf("Entre los n%cmeros %i y %i hay %i n%cmeros pares",163,n1,n2,pares,163);
    fflush(stdin);

    return 0;
}