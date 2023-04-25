#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int idadeadotante;
    int idadeadotando;
    char a1, a2, a3, a4, a5, a6;
    scanf("%d  %c  %c  %c %d  %c  %c  %c", &idadeadotante, &a1, &a2, &a3, &idadeadotando, &a4, &a5, &a6);
 
    // a1 = Se o adotante � irm�o ou ascendente
    // a2 = Se � Ado��o Conjunta
    // a3 = Adotantes s�o casados ou uni�o est�vel
    // a4 = Pais Desconhecidos ou Adotando Destitu�do do Poder Familiar?
    // a5 = Consentimento dos pais quando n�o desconhecidos 
    // a6 =Consentimento do adotando maior de doze anos de idade
    
    if (idadeadotante <= 18){ // se for menor de idade acaba a funcao aqui
        printf("Nao pode adotar");
        return 0;
    }
    else if ( idadeadotante > 18) {                     // maior de idade
        if (a1 == 'S'){ // � irmao ou ascendente
            printf("Nao pode adotar"); 
            return 0;
        } else if (a1 == 'N'){ // se nao � irmao ou ascendente
            if (a2 == 'S'){  // � adocao conjunta   vai ter que fazer depois pra a2 == 'N'
                if (a3 == 'N') { // � adocao conjunta mas nao sao casados 
                    printf("Nao pode adotar");}
                    else if (a3 == 'S'){ // � adocao conjunta e sao casados
                        if (idadeadotante -idadeadotando < 16){ // idade nao bate, termina
                            printf("Nao pode adotar");
                            return 0;
                        } else if (idadeadotante -idadeadotando >= 16 ){ // idade bate, continua
                            if (a4 == 'N'){// vai ter que fazer depois pra a4== 'S' NAO � DESCONHECIDO
                                if (a5 == 'N'){
                                    printf("Nao pode adotar");
                                    return 0;
                                } else if (a5 == 'S'){
                                    if ( idadeadotando >= 12){
                                        if (a6 == 'N'){
                                        printf("Nao pode adotar");
                                    } else if (a6 == 'S'){
                                        printf("Pode adotar"); // acaba aqui
                                    }
                                } else if (idadeadotando < 12){
                                    printf("Pode adotar");
                                }
                                }
                            } else if (a4 == 'S'){ // CASO OS PAIS SEJAM DESCONHECIDOS;
                                if (a5 == 'N' || a5 == 'S'){ // tanto faz o consentimento dos pais, ja q sao desconhecidos
                                    if (idadeadotando >= 12 ) {
                                        if (a6 == 'N'){
                                        printf("Nao pode adotar");
                                    } else if (a6 == 'S'){
                                        printf("Pode adotar"); // acaba aqui
                                    }
                                } else if (idadeadotando < 12){
                                    printf("Pode adotar");
                                }
                                }
                            }
                        }
                        
                    }
            } else if (a2 == 'N'){ //NAO � ADOCAO CONJUNTA, NAO IMPORTA SE � CASADO OU NAO
                if (a3 == 'N' || a3 == 'S'){ // ELES SENDO CASADOS OU NAO, NAO IMPORTA
                     // � adocao conjunta e sao casados
                        if (idadeadotante -idadeadotando < 16){ // idade nao bate, termina
                            printf("Nao pode adotar");
                            return 0;
                        } else if (idadeadotante -idadeadotando >= 16 ){ // idade bate, continua
                            if (a4 == 'N'){// vai ter que fazer depois pra a4== 'S' NAO � DESCONHECIDO == conhece
                                if (a5 == 'N'){
                                    printf("Nao pode adotar");
                                    return 0;
                                } else if (a5 == 'S'){
                                    if (idadeadotando >= 12){
                                    if (a6 == 'N'){
                                        printf("Nao pode adotar"); // ta dando erro aqui � SO SE FOR MAIOR Q 12 ANOS
                                    } else if (a6 == 'S'){
                                        printf("Pode adotar"); // acaba aqui
                                    }
                                }
                                else if (idadeadotando < 12){
                                    printf("Pode adotar");
                                }
                                }
                            } else if (a4 == 'S'){ // CASO OS PAIS SEJAM DESCONHECIDOS;
                                if (a5 == 'N' || a5 == 'S'){ // tanto faz o consentimento dos pais, ja q sao desconhecidos
                                    if (a6 == 'N'){
                                        printf("Nao pode adotar");
                                    } else if (a6 == 'S'){
                                        printf("Pode adotar"); // acaba aqui
                                    }
                                    
                                }
                            }
                        }
                        
                    
            }
        }
    }
}
return 0;
}