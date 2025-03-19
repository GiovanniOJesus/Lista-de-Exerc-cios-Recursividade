#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
EX 1 

int fatorial(int n) { 
  if (n == 0 || n == 1) {
      return 1;
  }
  return n * fatorial(n - 1);
}

int main() {
  int n = fatorial(5);
  printf("Resultado: %d", n); 

  return 0;
}
*/
/*
EX 2 

int soma_naturais(int n) {
  if (n == 0) {
      return 0; 
  }
  return n + soma_naturais(n - 1); 
}

int main() {
  int n = 4; 
  int resultado = soma_naturais(n); 
  printf("Resultado: %d\n", resultado); 

  return 0;
}
*/
/*
EX 3 

int fibonacci(int n) {
  if (n == 0) {
      return 0;
  }
  if (n == 1) {
      return 1; 
  }
  return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
  int n = 6; 
  int resultado = fibonacci(n); 
  printf("Resultado: %d\n", resultado); 
  return 0;
}
*/

/*
EX 4

int potencia(int x, int n) {

  if (n == 0) {
      return 1;
  }


  if (n == 1) {
      return x;
  }

  if (n % 2 == 0) {
      int half = potencia(x, n / 2); 
      return half * half; 
  } else {
      return x * potencia(x, n - 1);
  }
}
int main() {
  int x = 2; 
  int n = 5; 
  int resultado = potencia(x, n);  x^n ;
  printf("Resultado: %d\n", resultado); 

  return 0;
}
*/
/*
EX 5 

void contagem_regressiva(int n) {
    if (n < 0) {
        return; 
    }
    printf("%d ", n); 
    contagem_regressiva(n - 1); 
}

int main() {
    int n = 3; 
    contagem_regressiva(n);
    printf("\n"); 
    return 0;
}
*/
/*
EX 6

int soma_digitos(int n) {
    if (n == 0) {
        return 0; 
    }
    return (n % 10) + soma_digitos(n / 10); 

int main() {
    int n = 1234; 
    int resultado = soma_digitos(n); 
    printf("Soma dos dígitos: %d\n", resultado); 

    return 0;
}
*/
/*
EX 7

void inverter_string(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return; 
    }


    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;


    inverter_string(str, inicio + 1, fim - 1);
}

int main() {
    char str[] = "recursão"; 
    int n = strlen(str);

    inverter_string(str, 0, n - 1); 
    printf("String invertida: %s\n", str); 
    return 0;
}
*/



    
