#include<stdio.h> 

main(){
    char nome[50];
    float idade;
    char matricula[30];
    char endereco[100];
    char curso[40];
    char semestre[30];
    int disciplinas;


    printf("\n Cadastro \n");
    printf("\n Qual seu nome? \n");
    scanf("%s" , &nome);
     fflush(stdin);
    printf("\n Qual a sua idade? \n");
    scanf("%f", &idade);
    fflush(stdin);
    printf("\n Qual a sua matricula? \n");
    fgets( matricula , 30 , stdin);
    printf("\n Qual o seu endereco? \n ");
    fgets ( endereco , 100 , stdin);
    printf("\n Qual o seu curso?\n ");
    fgets (curso , 40 , stdin);
    printf("\n Em qual semestre vc esta?\n ");
    fgets(semestre , 30 ,stdin);
    printf("\n Quantas diciplinas vc tem? \n ");
    scanf("%d", &disciplinas);

    printf("Seus dados sao:  \n %s \n %.0f \n %s %s %s %s %d  ", nome , idade ,  matricula ,endereco , curso , semestre , disciplinas);
}
