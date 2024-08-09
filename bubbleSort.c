#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10,vetor[n], i,aux;
    
  for(i=0; i<n; i++){
        vetor[i]=rand() % n;
    }
    printf("Vetor aleatório ->");
    for(i=0; i<n; i++){
        printf(" %d ",vetor[i]);
    }
    
    printf("\n\n");
    
    for(int k=0; k<n;k++){
        for(int j = k+1; j<n;j++){
            if(vetor[k] > vetor[j]){
                aux = vetor[k];
                vetor[k] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("Bubble Sort ->");
    for(i=0; i<n; i++){
        printf(" %d ",vetor[i]);
    }
}