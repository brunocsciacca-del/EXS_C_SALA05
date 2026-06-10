#include<stdio.h>
#include<stdlib.h>
int main(){

    char cidade[50];
    char estado[50];
    int ano;
    int resp;

    printf("Digite sua cidade");
    fgets(cidade, 50, stdin);

    printf("Digite seu estado");
    fgets(estado, 50, stdin);

    printf("Qual ano do seu nascimento: ");
    scanf("%d", &ano);

    resp = ano - 2026;

    printf("Você nasceu em %s e no estado do (e) %s e tem %d anos", cidade, estado, resp);
    
    system("pause");
    return 0;
}