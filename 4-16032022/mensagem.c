//Programa que exibe uma mensagem de boas vindas ao nosso usuario
#include <stdio.h>

int main(){

char nome[50];

printf("Olá, por favor, nos informe seu nome:\n");
scanf("\n%s", nome); //%s de string, %c só chama um byte, a string vai chamar quantas eu marquei que deveria chamar

printf("Ola %s, seja bem vindo\n", nome);


    return 0;
}