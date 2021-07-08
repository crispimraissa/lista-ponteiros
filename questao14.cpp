#include <iostream>
#include <stdlib.h>
using namespace std;
int compare(const void *a, const void *b){ //Funcao de comparacao que recebe dois ponteiros para void e retornam um positivo, um negativo ou um nulo para o qsort
    if(*(float*)a == *(float*)b){  //se forem iguais retorna 0 para nao trocar
        return 0;
    }
    else if(*(float*)a > *(float*)b){ //se for maior retorna 1 para nao trocar
        return 1;
    }else{
        return -1; //se for menor retorna 1 para trocar
    }
}
int main(int argc, char const *argv[])
{
    int n;

    printf("Didite quantos valores sao: ");
    scanf("%d", &n); //leitura da quantidade de elementos do array

    float *x; // chamamento do ponteiro que guardara o array
    
    x = (float*) malloc (n*sizeof(float)); //Associando x ao primeiro elemento do array
    for(int i = 0; i<n; i++){
        printf("Digite os valores: ");
        cin >> x[i]; //Leitura dos valores do array e associando-os os espaços de memória com relação ao x
    }
    qsort(x,n,sizeof(float), compare); //Chamamento da funcao qsort que lera o array que esta representado por x, o numero de elementos representado por n, o tamanho dos elementos e a funcao de comparacao
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", x[i]); //Impressao dos valores
    }
    
    free(x);
    return 0;
}