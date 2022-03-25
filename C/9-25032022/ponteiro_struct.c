/*Programa para cadastrar clientes com os seguintes dados: Nome, Idade, E-Mail
*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    /*Coleção de dados sobre um determinado assunto
    Assunto: Cliente
    Dados: nome, email, idade*/
    struct cliente
    {
        char nome[30];
        char email[100];
        int idade;
    }; //no struct é necessario o ";" no final da chave.
    struct cliente novoCliente, *pnovoCliente;
    pnovoCliente = &novoCliente;

    printf("Entre com o nome do cliente:\n");
    scanf("%s", &pnovoCliente->nome);

    printf("Entre com o email do cliente:\n");
    scanf("%s", &pnovoCliente->email);

    printf("Entre com a idade do cliente:\n");
    scanf("%d", &pnovoCliente->idade);
    
    printf("O nome do cliente é %s\n", pnovoCliente->nome);
    printf("O e-mail do cliente é %s\n", pnovoCliente->email);
    printf("A idade do cliente é %d\n", pnovoCliente->idade);
}