#include <stdio.h>

int modulo(int resut) {
    if (resut < 0)
        return resut * -1;
    return resut;
}

int maisVelho(int idadePessoa1, int idadePessoa2) {
    if (idadePessoa1 > idadePessoa2)
        return idadePessoa1;
    return idadePessoa2;
}

int main() {
    
    int idadeP1 = 0, 
        idadeP2 = 0, 
        qtdLetrasNomeP1 = 0, 
        qtdLetrasNomeP2 = 0, 
        diferencaIdade = 0, 
        idadeMaisVelho = 0,
        calculaAmor = 0;
    
    printf("Digite a idade das duas pessoas\n");
    scanf("%i %i", &idadeP1, &idadeP2);
    
    printf("Quantidade de letras do nome da primeira pessoa\n");
    scanf("%i", &qtdLetrasNomeP1);
    
    printf("Quantidade de letras do nome da segunda pessoa\n");
    scanf("%i", &qtdLetrasNomeP2);
    
    diferencaIdade = modulo(idadeP1 - idadeP2);
    idadeMaisVelho = maisVelho(idadeP1, idadeP2);
    
    calculaAmor = diferencaIdade * (qtdLetrasNomeP1 + qtdLetrasNomeP2);
    if (calculaAmor > 100)
        calculaAmor = calculaAmor % idadeMaisVelho;
        
    printf("a porcentagem do amor eh, %i \%", calculaAmor);

    return 0;
}

