#include <iostream>
#include <stdlib.h>
using namespace std;
int y[900];
void compare(int x[900], int n){

    int aux;

    for(int j = 0; j<n; j++){
        for(int i = 0; i<n; i++){
            if(x[i]>x[j]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        y[i] = x[i];
    }
    
}
int main(int argc, char const *argv[])
{
    int n, *x;

    printf("Didite quantos valores sao: ");
    scanf("%d", &n);
    
    x = (int*) malloc (n*sizeof(int));
    for(int i = 0; i<n; i++){
        printf("Digite os valores: ");
        cin >> x[i];
    }
    compare(x,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", y[i]);
    }
    
    free(x);
    return 0;
}