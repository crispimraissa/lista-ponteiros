#include <iostream>
#include <stdlib.h>
using namespace std;
void somavetorial(float x[900], int n, float y[900], int m){
    int o = 0;
    if(m>n){
        o = m;
        for (int i = n; i < o; i++)
        {
            x[i] = 0;
        }
    }else{
        o = n;
        for (int i = m; i < o; i++)
        {
            y[i] = 0;
        }
    }
    float z[o];
    for (int i = 0; i < o; i++)
    {
        z[i] = x[i] + y[i]; 
    }
    for (int i = 0; i < o; i++)
    {
        printf("%.3f ",z[i]);
    }
    
    
}
int main(int argc, char const *argv[])
{
    int n, m;
    float *x, *y;

    printf("Didite quantos valores sao o vetor 1: ");
    scanf("%d", &n);
    
    x = (float*) malloc (n*sizeof(float));
    for(int i = 0; i<n; i++){
        printf("Digite os valores: ");
        cin >> x[i];
    }

    printf("Didite quantos valores sao o vetor 2: ");
    scanf("%d", &m);

    y = (float*) malloc (m*sizeof(float));
    for(int i = 0; i<m; i++){
        printf("Digite os valores: ");
        cin >> y[i];
    }
    somavetorial(x,n,y,m);
    free(y);
    free(x);
    return 0;
}