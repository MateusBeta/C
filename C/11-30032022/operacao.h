/*
operacao.h é a head que sera basicamente toda a estrutura do programa, chamando as structs como "dcurso.h"
e "dunidade.h", a operacao.h sera usada no cadastro.c
*/
#include <stdio.h>
#include <stdlib.h>
#include "dcurso.h"
#include "dunidade.h"

void operacao(){

    FILE *arquivo;

    arquivo = fopen("dados.txt","w");

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa
    }
    
    struct Dados_Curso novoCurso, *pnovoCurso;
    pnovoCurso = &novoCurso;

    printf("Entre com o nome do curso:\n");
    fgets(pnovoCurso->nomeCurso,60,stdin);

    printf("Entre com a descrição do curso:\n");
    fgets(pnovoCurso->descricaoCurso,500,stdin);

    printf("Entre com a carga horaria do curso:\n");
    fgets(pnovoCurso->cargaHoraria,50,stdin);
    
    printf("Entre com a data de inicio do curso:\n");
    fgets(pnovoCurso->dataInicio,50,stdin);

    printf("Entre com a data de termino do curso:\n");
    fgets(pnovoCurso->dataTermino,50,stdin);

    printf("Entre com o preço do curso:\t ex: 1200.450,00\n");
    fgets(pnovoCurso->preco,30,stdin);
    
    ///////////////////////////////////////////////////////////

    struct Dados_Unidade novaUnidade, *pnovaUnidade;
    pnovaUnidade = &novaUnidade;

    printf("Entre com o nome da Unidade:\n");
    fgets(pnovaUnidade->nomeUnidade,50,stdin);

    printf("Entre com a localização da Unidade:\n");
    fgets(pnovaUnidade->localizacao,100,stdin);

    printf("Entre com o horario de funcionamento da Unidade:\n");
    fgets(pnovaUnidade->horarioFuncionamento,30,stdin);

    printf("Entre com o telefone da Unidade:\n");
    fgets(pnovaUnidade->telefone,30,stdin);

    fprintf(arquivo,pnovoCurso->cargaHoraria);
    fprintf(arquivo,pnovoCurso->dataInicio);
    fprintf(arquivo,pnovoCurso->dataTermino);
    fprintf(arquivo,pnovoCurso->descricaoCurso);
    fprintf(arquivo,pnovoCurso->nomeCurso);
    fprintf(arquivo,pnovoCurso->preco);

    fprintf(arquivo,pnovaUnidade->horarioFuncionamento);
    fprintf(arquivo,pnovaUnidade->localizacao);
    fprintf(arquivo,pnovaUnidade->nomeUnidade);
    fprintf(arquivo,pnovaUnidade->telefone);

    fclose(arquivo);
}