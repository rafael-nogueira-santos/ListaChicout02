/* Escreva uma função em C para trocar os elementos de índice m e n de uma lista.*/

#include <stdio.h>
int lista[10];
void printList()
{
    for (int i = 0; i < 10; i++) {
        printf("%i => %i \n", i ,lista[i]);
    }
}
void setList(){
    for (int i = 0; i < 10; i++) {
        lista[i] = i + 2;
    }
}
void troca()
{
    int m, n, auxM, auxN;
    printf("Digite a posicao para trocar: ");
    scanf("%i", &m);

    printf("Digite a segunda posicao a ser trocada: ");
    scanf("%i", &n);

    auxM = lista[m];
    auxN  = lista[n];

    lista[m] = auxN;
    lista[n] = auxM;
}

int main() {
    setList();
    printList();
    troca();
    printList();
}