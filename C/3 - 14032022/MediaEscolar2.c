//Programa escolar para saber se os alunos passaram ou nao nas respectivas materias
#include <stdio.h>

int main(){


float NotaMat, NotaPT, NotaGEO, Media;

Media = 7;
printf("Escreva as notas do em ordem, Geografia, Portugues, Matematica\n");
scanf("%f %f %f", &NotaGEO, &NotaPT, &NotaMat);



    if (NotaGEO >= Media) {
        printf("O aluno esta aprovado em Geografia\n");
    }
    else {
        printf("O aluno esta reprovado em Geografia\n");
    }
    if (NotaPT >= Media) {
        printf("O aluno esta aprovado em Portugues\n");
    }
    else {
        printf("O aluno esta reprovado em Portugues\n");
    }
    if (NotaMat >= Media){
        printf("O aluno esta aprovado em Matematica\n");
    }
    else {
        printf("O aluno esta reprovado em Matematica\n");
    }
return 0;
}