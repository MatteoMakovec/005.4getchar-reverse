// ESERCIZIO 2:
// scrivere il seguente programma:
// legge e salva (in memoria) tutti i dati provenienti da stdin fino a EOF
// poi scrive su stdout i dati accumulati ma all'incontrario (dall'ultimo al primo)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int ch;
  int size = 1;
  char *lettura = calloc(size, sizeof(char));

  printf("\n'@' in questo esercizio è il carattere che indica l'EOF\n\n");
  printf("\nScrivi quello che vuoi nello stdin:\n");
  while((ch = getchar()) != '@') {
    lettura[size-1] = ch;
    size++;
    lettura = realloc(lettura, size*sizeof(char));
  }

  printf("\nStampa al contrario di quello visto da stdin:\n");

  while(size >= 0){
    printf("%c", lettura[size-1]);
    size--;
  }

  free(lettura);

  return 0;
}