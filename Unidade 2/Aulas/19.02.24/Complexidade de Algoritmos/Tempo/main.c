#include <stdio.h>
//#include <stdlib.h>

int max(int arr[], int n){
    int i; /*c1, 1 vez*/
    int max = arr[0]; /*c2, 1 vez*/
    for (i = 1; i < n; i++){ //c3, n-1 vezes
        if (arr[i] > max){ //c4, n-1 vezes
            max = arr[i]; //c5, entre 0 e n-1 vezes
        }
        
    }
    return max; //c6, 1 vez
}

/* Tempo total:
1) T(max) pior caso = c1+c2+c3(n-1)+c4(n-1)+c5(n-1)+c6(n-1)
(c3+c4+c5)+c1+c2+c6
T(max) melhor caso= c1+c2+c3(n-1)+c4(n-1)+c5(0)+c6(n-1)(c3+c4)+c1+c2+c6(n-1)(c3+c4)+c1+c2+c6
*/
int funcao_aula(int max1, int max2){ //c1, 1 vez
    int count1, count2;
    for(count1 = 0; count1 < max1; count1++){ //c2,max1 vezes
        for (count2 = 0; count2 < max2; count2++){ //c2,max1 vezes
            printf("Exemplo da aula"); //c4,max2 vezes
        } 
    }
    return 0; //c5, 1 vez
}
