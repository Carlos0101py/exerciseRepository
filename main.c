#include <stdio.h>

// 1–Faça um programa que leia três valores (A, B, C) e mostre-os na ordem lida.
// Em seguida, mostre-os em ordem crescente e decrescente.

int main(void) {

  int vetNumero[3];

  // leitura
  for (int i = 0; i < 3; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetNumero[i]);
  }
  // ordem lida
  printf("ordem lida: ");
  for (int i = 0; i < 3; i++) {
    printf("%d ", vetNumero[i]);
  }
  printf("\n");
  printf("Crescente: ");
  // ordem crescente
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (vetNumero[i] >= vetNumero[j]) {
        int aux = vetNumero[i];
        vetNumero[i] = vetNumero[j];
        vetNumero[j] = aux;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    printf("%d ", vetNumero[i]);
  }
  printf("\n");
  printf("decrescente: ");
  // ordem decrecente
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (vetNumero[i] <= vetNumero[j]) {
        int aux = vetNumero[i];
        vetNumero[i] = vetNumero[j];
        vetNumero[j] = aux;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    printf("%d ", vetNumero[i]);
  }
  return 0;
}