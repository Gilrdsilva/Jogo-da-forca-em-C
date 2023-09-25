#include <stdio.h>
#include <string.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char palavrasecreta[20], letra;
    char palavra[20];
    int acertou = 0;
    int enforcou = 0;
    int verif;
    int erro = 0;
    
    sprintf(palavrasecreta, "MELANCIA");
    for (int i = 0; i < strlen(palavrasecreta); i++) {
        palavra[i] = '_';
    }
    do {
        printf("Qual  a letra?\n");
        scanf(" %c", &letra);
        printf("A letra escolhida foi: %c\n", letra);

        for(int x = 0; x<strlen(palavrasecreta); x++){
            if (letra == palavrasecreta[x]){
                printf("A letra %c esta na posicao %d\n", letra,x)+1;
                palavra[x]= letra;
                verif = 1;
            }

            
        }
        if(palavra == palavrasecreta){
                printf("Parabens, Você acertou!\n A palavra era %s\n", palavra);
                acertou = 1;
            }
        if (verif == !1){
            printf("A letra %c não está na palavra secreta\n", letra);
            erro += 1; 
            if (erro > 0 && erro < 5){  
                printf("Você Tem mais %d chances\n", 5 - erro);
            }
            else{
                printf("Você Perdeu!\nA palavra era %s",palavrasecreta);
                enforcou = 1; 
            }     
        }
        verif= 0; 
        printf("%s\n", palavra);
    }
    while(!acertou && !enforcou);
    return 0;
} 