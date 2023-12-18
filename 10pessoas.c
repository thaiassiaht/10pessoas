#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    double idade[10];
    double peso[10];
    double altura[10];
    float soma = 0;
    double media = 0;
    int quantidade = 0;
    int countPessoasAltas = 0;

    for (int i = 0; i < 10; i++) {
        printf("Informe a idade da pessoa %d\n", i + 1);
        scanf("%lf", &idade[i]);
        printf("Informe o peso da pessoa %d\n", i + 1);
        scanf("%lf", &peso[i]);
        printf("Informe a altura da pessoa %d\n", i + 1);
        scanf("%lf", &altura[i]);

        soma += idade[i];

        if (peso[i] > 80 && altura[i] < 1.50) {
            quantidade++;
        }

        if (idade[i] >= 10 && idade[i] <= 30 && altura[i] > 1.90) {
            countPessoasAltas++;
        }
    }

    media = soma / 10;
    double porcent = (countPessoasAltas * 100.0) / 10;

    printf("A m�dia das idades das dez pessoas �: %.2lf\n", media);
    printf("A quantidade de pessoas com peso superior a 80Kg e altura inferior a 1,50 metro �: %d\n", quantidade);
    printf("A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m �: %.2lf%%\n", porcent);

    return 0;
}
