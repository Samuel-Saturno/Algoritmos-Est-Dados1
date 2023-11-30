//Escreva uma funcao que receba dois numeros positivos por parametro e retorne a soma dos N numeros
//inteiros existentes entre eles

#include <stdio.h>

int main(){
  int i, n, x, y, soma, fsoma;
  soma = 0;

  printf("Digite um numero: ");
  scancf("%d", &n);
  
  int func[n][2], fsoma[n];
  
  for (i = 0; i <= n; i ++){
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0){
      func[i][1] = x;
      func[i][2] = y;
      if (x < y){
        while (x != y){
          soma = soma + x;
          fsoma[n] = soma;
          x = x + 1;
        }
      } else if(y < x) {
        while (y != x) {
          soma = soma + y;
          fsoma[n] = soma;
          y = y + 1;
        }
      } else{
        printf("A soma é dos numeros inteiros entre esses valores é zero");
      }
    } else {
      printf("Funcao invalida, os numeros precisam serem positivos");
    }
  }
  for (fsoma = 0; fsoma <= n; fsoma++){
    printf("A soma dos numeros inteiros entre esses valores é %d", fsoma[fsoma]);
  }
}
