#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

#define tamanho 5

typedef struct processo{
    int PID;
    char nomeProcesso[10];
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
pilha.topo = 0;
pilha.ini = 0;
while (opMenu != 0){
    system("cls");
    mostrarPilha();
    menuPrincipal();
    scanf("%d", &opMenu);
    switch (opMenu){
    case 1:
        adicionaProcesso(elemento);
        system("pause");
        break;
    case 2:
        removeProcesso();
        system("pause");
        break;
    case 3:
        limparPilha();
        system("pause");
        break;
    case 0:
        printf("\nPrograma Finalizado! \n\n");
        system("pause");
        break;
    default:
        printf("\nOpção Inválida, tente novamente \n\n");
        system("pause");
        break;
    }
    } return(0);
}

void adicionaProcesso(processo elemento){
    if (pilha.topo == tamanho){
        printf ("Desculpe, a pilha está lotada. Remova algum processo ou execute a limpeza. \n\n");
    }else{
        printf("Informe o nome do processo a ser enfileirado: \n");
        scanf("%s", &elemento.nomeProcesso);
        fflush(stdin);
        //lembrar de substituir esta declaração por uma função que gere números randômicos
        elemento.PID = pilha.topo + 1051;
        pilha.dados[pilha.topo] = elemento;
        pilha.topo ++;
        printf("\nProcesso adicionado com Sucesso. \n\n");
    }
}
processo removeProcesso(){
    if (pilha.ini == pilha.topo){
        printf ("Desculpe, a pilha está vazia. Insira processos para remover.\n\n");
    }else{
        processo elemento;
        elemento = pilha.dados[pilha.topo -1];
        pilha.topo --;
        printf("\nProcesso PID: %d - Nome: %s | Removido com sucesso! \n\n", elemento.PID, elemento.nomeProcesso);
        return elemento;
    }
}
void limparPilha(){
    int i;
    if (pilha.topo == pilha.ini){
        printf("Não existem processos na pilha para executar a limpeza. \nInsira processos e tente novamente mais tarde.\n\n");
    }else{
        for(i=pilha.topo; i > 0; i--){
            pilha.topo --;
        }
        printf("Limpeza de Pilha efetuada com sucesso! \n\n");
    }
}
void mostrarPilha(){
    int i;
    if(pilha.topo == pilha.ini){
        printf("Não existem Processos na Pilha. \n");
    }else {
        for(i=0; i < pilha.topo; i++){
            printf("PID: %d - Processo: %s \n", pilha.dados[i].PID, pilha.dados[i].nomeProcesso);
        }
    }
}

void menuPrincipal(){
    printf("\n *** Informe a Opção desejada: ***\n");
    printf("\n 1 - Inserir processo na pilha \n");
    printf("\n 2 - Remover processo da pilha \n");
    printf("\n 3 - Esvaziar a pilha \n");
    printf("\n 0 - Sair do Programa \n");
}