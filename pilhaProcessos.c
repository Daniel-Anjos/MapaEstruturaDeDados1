#include<stdlib.h>
#include<stdio.h>

#define tamanho = 5

struct processo{
    int codigo;
    char nome [20];
};

struct processo fila;
int opMenu;

int main (){
while (opMenu != 0){
    menuPrincipal();
    scanf("%d", &opMenu);
};
}
void menuPrincipal(){
    printf("\n Informe a Opção desejada: \n");
    printf("\n 1- Inserir processo na pilha \n");
    printf("\n 2 - Remover processo da pilha \n");
    printf("\n 0 - Sair do Programa \n");
}
