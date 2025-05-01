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

EX 8

int palindromo(char poli[], int inicio, int fim) {
  if (inicio >= fim) {
      return 1;
  }
  if (poli[inicio] != poli[fim]) {
      return 0;
  }
  return palindromo(poli, inicio + 1, fim - 1);
}

EX 9

int mdc(int a, int b) {
    return (b == 0) ? a : mdc(b, a % b);
}

EX 10 
int multiplicar(int a, int b) {
    if (b == 0) return 0;
    return a + multiplicar(a, b - 1);
}

EX 11
int contarChar(const char *str, char c) {
    if (*str == '\0') return 0;
    return (*str == c) + contarChar(str + 1, c);
}

EX 12
int somaArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[0] + somaArray(arr + 1, n - 1);
}

EX 13

int Primo(int n, int i) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return 0;
    if (i * i > n) return 1;
    return Primo(n, i + 1);
}

EX 14

void binario(int n) {
    if (n > 1) binario(n / 2);
    printf("%d", n % 2);
}

EX 15
void imprimirPares(int n) {
    if (n < 0) return;
    imprimirPares(n - 2);
    if (n % 2 == 0) printf("%d ", n);
}

EX 16

void imprimirImpares(int n) {
    if (n <= 0) return;
    imprimirImpares(n - 2);
    if (n % 2 == 1) printf("%d ", n);
}

EX 17

int buscaArray(int arr[], int n, int x) {
    if (n == 0) return 0;
    return (arr[0] == x) || buscaArray(arr + 1, n - 1, x);
}

EX 18

int comprimento(const char *str) {
    return (*str == '\0') ? 0 : 1 + comprimento(str + 1);
}

EX 19

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", A, C);
        return;
    }
    hanoi(n - 1, A, C, B);
    printf("Mover disco %d de %c para %c\n", n, A, C);
    hanoi(n - 1, B, A, C);
}

EX 20 

void permutar(char *str, int l, int r) {
    if (l == r) printf("%s\n", str);
    else {
        for (int i = l; i <= r; i++) {
            char tmp = str[l]; str[l] = str[i]; str[i] = tmp;
            permutar(str, l + 1, r);
            tmp = str[l]; str[l] = str[i]; str[i] = tmp;
        }
    }
}

EX 21

void combinacoes(int arr[], int n, int k, int index, int data[], int i) {
    if (index == k) {
        for (int j = 0; j < k; j++) printf("%d ", data[j]);
        printf("\n");
        return;
    }
    if (i >= n) return;
    data[index] = arr[i];
    combinacoes(arr, n, k, index + 1, data, i + 1);
    combinacoes(arr, n, k, index, data, i + 1);
}

EX 22

void subconjuntos(int arr[], int n, int index, int subset[], int subsize) {
    if (index == n) {
        printf("{");
        for (int i = 0; i < subsize; i++) printf("%d ", subset[i]);
        printf("}\n");
        return;
    }
    subset[subsize] = arr[index];
    subconjuntos(arr, n, index + 1, subset, subsize + 1);
    subconjuntos(arr, n, index + 1, subset, subsize);
}

EX 23

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
    i = j = 0; k = l;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
            i++;
        }
    }
    int t = arr[i]; arr[i] = arr[high]; arr[high] = t;
    return i;
}

EX 24

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

EX 25

int buscaBinaria(int arr[], int l, int r, int x) {
    if (l > r) return -1;
    int m = (l + r) / 2;
    if (arr[m] == x) return m;
    if (x < arr[m]) return buscaBinaria(arr, l, m - 1, x);
    return buscaBinaria(arr, m + 1, r, x);
}

EX 26

int expRap(int x, int n) {
    if (n == 0) return 1;
    int temp = expRap(x, n / 2);
    return (n % 2 == 0) ? temp * temp : x * temp * temp;
}

EX 27

int contarCaminhos(int x1, int y1, int x2, int y2) {
    if (x1 > x2 || y1 > y2) return 0;
    if (x1 == x2 && y1 == y2) return 1;
    return contarCaminhos(x1 + 1, y1, x2, y2) + contarCaminhos(x1, y1 + 1, x2, y2);
}

EX 28

int seguro(int tab[], int linha, int col, int n) {
    for (int i = 0; i < linha; i++)
        if (tab[i] == col || abs(tab[i] - col) == linha - i)
            return 0;
    return 1;
}
void nRainhas(int tab[], int linha, int n) {
    if (linha == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                printf(tab[i] == j ? "Q " : ". ");
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int col = 0; col < n; col++) {
        if (seguro(tab, linha, col, n)) {
            tab[linha] = col;
            nRainhas(tab, linha + 1, n);
        }
    }
}

EX 29

int resolverLab(int lab[3][4], int x, int y, int caminho[3][4]) {
    if (x == 2 && y == 3) {
        caminho[x][y] = 1;
        return 1;
    }
    if (x >= 0 && y >= 0 && x < 3 && y < 4 && lab[x][y] == 0 && caminho[x][y] == 0) {
        caminho[x][y] = 1;
        if (resolverLab(lab, x + 1, y, caminho) || resolverLab(lab, x, y + 1, caminho))
            return 1;
        caminho[x][y] = 0;
    }
    return 0;
}

EX 30

void parenteses(char *str, int pos, int n, int abertos, int fechados) {
    if (fechados == n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }
    if (abertos < n) {
        str[pos] = '(';
        parenteses(str, pos + 1, n, abertos + 1, fechados);
    }
    if (fechados < abertos) {
        str[pos] = ')';
        parenteses(str, pos + 1, n, abertos, fechados + 1);
    }
}

int main() {
  int n = 12;
  int n2 = 8;
  int n3 = 6;
  int x = 6, n4 = 2;
  int n5 = 10;
  int n6 = 12345;
  char invert[] = "pierre";
  int ord = strlen(invert);
  char poli[] = "arara";
  int ord2 = strlen(poli);
  
*/



    
