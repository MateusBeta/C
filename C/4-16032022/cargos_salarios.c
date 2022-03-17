#include <stdio.h>

int main(){

/*funcionarios: Nicolas Roberto, Petrus, Salles, Guilherme
                111     112     113     114     115   */
char nome[20], senha[20];


printf("Por favor, nos informe o seu usuario: ");
scanf("%s", nome);


printf("Por favor, nos informe a sua senha: \n");
scanf("%s", senha);

        if(strcmp(nome,"nicolas")==0){ 
        if(strcmp(senha,"111")==0)
        printf("Ola Diretor Nicolas, a tabela dos salarios é:\nDiretor R$15.000,00\nGerente R$12.000,00\nAnalista R$8.000,00\nAssistente R$4.000,00\nAuxiliar R$2.000,00\n");
    }
        if(strcmp(nome,"roberto")==0){ 
        if(strcmp(senha,"112")==0)
    
        printf("Ola Gerente Roberto, a tabela dos salarios é:\nGerente R$12.000,00\nAnalista R$8.000,00\nAssistente R$4.000,00\nAuxiliar R$2.000,00\n");
    }
        if(strcmp(nome,"petrus")==0){ 
        if(strcmp(senha,"113")==0)
    
        printf("Ola Analista Petrus, a tabela dos salarios é:\nAnalista R$8.000,00\nAssistente R$4.000,00\nAuxiliar R$2.000,00\n");
    }
        if(strcmp(nome,"salles")==0){ 
        if(strcmp(senha,"114")==0)
        printf("Ola Assistente Salles, a tabela dos salarios é:\nAssistente R$4.000,00\nAuxiliar R$2.000,00\n");
    }
        if(strcmp(nome,"guilherme")==0){ 
        if(strcmp(senha,"115")==0)
    
        printf("Ola auxiliar Guilherme, a tabela dos salarios é:\nAuxiliar R$2.000,00\n");
    }
    else{
        printf("Você errou a senha ou não esta registrado na empresa\n");
    }




return 0;
}