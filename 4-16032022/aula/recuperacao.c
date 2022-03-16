#include <stdio.h>

int main(){

float notaAluno, mediaAprovado, mediaReprovado;
//posso usar #define "nome da variavel = ..." assim nao preciso criar uma variavel.
mediaAprovado = 7;
mediaReprovado = 4;
printf("Qual a nota do aluno?\n");
scanf("%f", &notaAluno);

    if (notaAluno >= mediaAprovado)
    {
        printf("Aluno foi Aprovado\n");
    }
    /* else if pq se colocar mtos ifs, fica mal otimizado, pq ele vai testar em todos os "ifs" até
    acabar, se colocar "else if", vai testar no primeiro if, se falhar passar pro else if*/
    else if (notaAluno <= mediaReprovado)
    {
        printf("Aluno foi Reprovado\n");
    }
    //o else aqui é usado pra pegar o resto, tudo a cima de 4 e tudo abaixo de 7
    else {
        printf("O aluno esta em recuperação\n");

    }
return 0;
}