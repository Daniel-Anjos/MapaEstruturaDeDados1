#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

#define tamanho 5

typedef struct processo{
    int PID;
    char nomeProcesso[15];
}processo;

typedef struct tipo_pilha{
    processo dados[tamanho];
    int ini, topo;
}tipo_pilha;

processo elemento;
tipo_pilha pilha;

void menuPrincipal();
void adicionaProcesso();
processo removeProcesso();
void limparPilha();
void mostrarPilha();

int main (){
    setlocale (LC_ALL, "Portuguese");
int opMenu;
while (opMenu != 0){
    mostrarPilha();
    menuPrincipal();
    scanf("%d", &opMenu);
    switch (opMenu){
    case 1:
        adicionaProcesso(elemento);
        break;
    case 2:
        removeProcesso();
    case 3:
        limparPilha();
    default:
        printf("Opção Inválida, tente novamente");
        system("pause");
        break;
    }
};
}

void adicionaProcesso(processo elemento){
    if (pilha.topo == tamanho){
        printf ("Desculpe, a pilha está lotada. Remova algum processo ou execute a limpeza. \n");
        system("pause");
    }else{
        printf("Informe o nome do processo a ser enfileirado: \n");
        scanf("%s", &elemento.nomeProcesso);
        fflush(stdin);
        //lembrar de substituir esta declaração por uma função que gere números randômicos
        elemento.PID += 15;
        pilha.dados[pilha.topo] = elemento;
        pilha.topo ++;
    }
}
processo removeProcesso(){
    if (pilha.ini == pilha.topo){
        printf ("Desculpe, a pilha está vazia. Insira elementos para remover.\n");
        system("pause");
    }else{
        processo elemento;
        pilha.topo --;
        elemento = pilha.dados[pilha.topo];
        return elemento;
    }
}
void limparPilha(){
    int i;
    for(i=tamanho; i > 0; i--){
        pilha.topo --;
    }
    printf("Limpeza de Pilha efetuada com sucesso! \n");
    system("pause");
}
void mostrarPilha(){
    int i;
    for(i=0; i < tamanho; i++){
        printf("%d PID: ", "%s Processo: \n", pilha.dados[i].PID, pilha.dados[i].nomeProcesso);
    }
}

void menuPrincipal(){
    printf("\n *** Informe a Opção desejada: ***\n");
    printf("\n 1- Inserir processo na pilha \n");
    printf("\n 2 - Remover processo da pilha \n");
    printf("\n 3 - Esvaziar a pilha \n");
    printf("\n 0 - Sair do Programa \n");
}