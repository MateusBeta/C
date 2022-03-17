/*Programa para calcular o resultado da situação do aluno, se esta aprovado ou reprovado
onde a média da suposta escola é "7" e o programa faz o calculo, caso a nota seja maior ou igual a 7
o aluno sera aprovado, se for menor que 7, sera reprovado*/

/*Incluir o cabeçalho de entrada e saida de dados padrão:(std) = standard -> Padrão, (io) = i -> input,
e (o) -> output.*/
#include <stdio.h>

int main()
{
//float, pois a nota/média pode ser quebrada por ex: 8,2
float NotaAluno, Media;

//Aqui temos a média da escola, que ira servir como base pra saber se o aluno foi aprovado
Media = 7;
//Pergunta ao usuario para ele nos informar a informação que procuramos
printf("Qual a nota do aluno? \n");
//scanf vai scanear o que foi digitado e printar na variavel "NotaAluno"
scanf("%f", &NotaAluno);
    /*O if funciona como num fluxograma, se("if") alguma coisa acontecer, fara tal coisa, caso nao 
    ocorra, teremos o "else" para fazer o trabalho, o "else" não é necessario para o "if"*/
    if (NotaAluno >= Media) {
        printf("Aprovado\n");
    }
    //caso nao ocorra o "if"
    else {
        printf("Reprovado\n");
    }

return 0;

}