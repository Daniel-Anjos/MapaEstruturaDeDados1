#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

#define tamanho = 5

struct processo{
    int codigo;
    char nomeProcesso[20];
};

struct processo fila;
int opMenu;
int ini, fim;

void menuPrincipal();
void adicionaProcesso();
void removeProcesso();
void limparPilha();
void mostrarPilha();

int main (){
    setlocale (LC_ALL, "Portuguese");
while (opMenu != 0){
    mostraPilha();
    menuPrincipal();
    scanf("%d", &opMenu);
};
}

void adicionaProcesso(nomeProcesso){
    if (ini == fim){
        printf ("Desculpe, a pilha está lotada. Remova algum processo ou execute a limpeza.");
    }else{
    printf("Informe o nome do processo a ser enfileirado: \n");
    scanf("%d", &nomeProcesso);
    }
}

void menuPrincipal(){
    printf("\n *** Informe a Opção desejada: ***\n");
    printf("\n 1- Inserir processo na pilha \n");
    printf("\n 2 - Remover processo da pilha \n");
    printf("\n 3 - Esvaziar a pilha \n");
    printf("\n 0 - Sair do Programa \n");
}
