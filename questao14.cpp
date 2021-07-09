#include <iostream>
#include <stdlib.h>
using namespace std;
int compare(const void *a, const void *b){
    if(*(float*)a == *(float*)b){
        return 0;
    }
    else if(*(float*)a > *(float*)b){
        return 1;
    }else{
        return -1;
    }
}
int main(int argc, char const *argv[])
{
    int n;

    printf("Didite quantos valores sao: ");
    scanf("%d", &n);

    float *x;
    
    x = (float*) malloc (n*sizeof(float));
    for(int i = 0; i<n; i++){
        printf("Digite os valores: ");
        cin >> x[i];
    }
    qsort(x,n,sizeof(float), compare);
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", x[i]);
    }
    
    free(x);
    return 0;
}