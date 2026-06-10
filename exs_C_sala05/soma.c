//Inclui a bibliteca stdio.h que permite usar entrada e saída de infos(printf e scanf)
#include<stdio.h>
//inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>
//declarar a função principal, onde o prorama começa a execução
int main(){

    //declara variaveis
    float numero1, numero2, respostaSoma;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    respostaSoma = numero1 + numero2;
    printf("%.2f",respostaSoma);

    //pausar o sistema ate o usuario pressione qualquer tecla
    system("pause");
    //finalizar o sistema retornando 0 - tudo ocorreu bem
    return 0;
}