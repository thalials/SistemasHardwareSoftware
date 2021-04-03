#include <stdio.h>

void tabuada(int n){
  int valor;

  for (int i = 2; i <= n; i++){
    printf("\n");
    for (int j = 1; j <= n; j++){
      valor = j*i;
      printf("%d ",valor);
    }
  }
}

int main(){
  int n;
  scanf("%d", &n);
  tabuada(n);
  
  return 0;
}
