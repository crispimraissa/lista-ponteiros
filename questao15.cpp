#include <iostream>
#include <stdlib.h>
using namespace std;
int y[900];
int compare (const int a, const int b){
    if(a == b){  //se forem iguais retorna 0 para nao trocar
        return 0;
    }
    else if(a > b){ //se for maior retorna 1 para nao trocar
        return 1;
    }else{
        return -1; //se for menor retorna 1 para trocar
    }
}
int compare1(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void meusort (int* base, int num, int (*comp)(const int, const int)){
    int aux;
    for(int j = 0; j<num; j++){
        for(int i = 0; i<num; i++){
            if(comp(base[i],base[j]) == 1){
                aux = base[i];
                base[i] = base[j];
                base[j] = aux;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
      y[i] = base[i];
    }
    
}

int main(void){
    int n;

    printf("Didite quantos valores sao: ");
    scanf("%d", &n); //leitura da quantidade de elementos do array

    int *x, *y, z[n]; // chamamento do ponteiro que guardara o array
    
    x = (int*) malloc (n*sizeof(int)); //Associando x ao primeiro elemento do array
    for(int i = 0; i<n; i++){
        printf("Digite os valores: ");
        cin >> x[i]; //Leitura dos valores do array e associando-os os espaços de memória com relação ao x
        z[i] = x[i];
    }
    printf("\nCom meusort\n");
    meusort(x, n, compare);
    for(int i = 0; i<n; i++){
      printf("%d ", x[i]);
    }
    free(x);

    printf("\nCom qsort\n");
    
    y = (int*) malloc (n*sizeof(int));
    qsort(z,n,sizeof(int), compare1);
    for(int i = 0; i<n; i++){
        printf("%d ", z[i]);
    }
    free(y);

}