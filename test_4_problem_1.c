#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char tab[9][25];
    char string[24];
    //scanf(" %[^\n]", string);
    //printf("%s", string);
    //for(int i = 0; i<8; i++){
     //for(int j = 0; j<8; j++){
    //       scanf("%", tab[i][j]);
      // }
    //}
    
    for(int i = 0; i<24; i++){
        //fgets(tab[i],9,stdin);
        scanf(" %[^\n] ", tab[i]);
    }
    
 // printf("%s\n", tab[0]);
   // printf("%c", tab[0][0]);
    
    int pretas = 0, brancas = 0;
  int x = strncmp(tab[0], "tb",2);
  //printf("%d", x);
  
  for(int i = 0; i<8; i++){
        for(int j = 0; j<25; j = j+3){
            if(tab[i][j] == 'p' && tab[i][j+1] == 'b'){
                
                brancas = brancas+1;
            }
            
            if(tab[i][j] == 'b' && tab[i][j+1] == 'b'){
                brancas = brancas+3;
            }
            
            if(tab[i][j] == 'c' && tab[i][j+1] == 'b'){
                brancas = brancas+3;
            }
            
            if(tab[i][j] == 't' && tab[i][j+1] == 'b'){
                brancas = brancas+8;
            }
            
            if(tab[i][j] == 'd' && tab[i][j+1] == 'b'){
                brancas = brancas+9;
            }
            
            if(tab[i][j] == 'r' && tab[i][j+1] == 'b'){
                brancas = brancas;
            }
            /// pra baixo eh pretas
            
            if(tab[i][j] == 'p' && tab[i][j+1] == 'p'){
                pretas = pretas+1;
            }
            
            if(tab[i][j] == 'b' && tab[i][j+1] == 'p'){
                 pretas = pretas+3;
            }
            
            if(tab[i][j] == 'c' && tab[i][j+1] == 'p'){
                 pretas = pretas+3;
            }
            
            if(tab[i][j] == 't' && tab[i][j+1] == 'p'){
                 pretas = pretas+8;
            }
            
            if(tab[i][j] == 'd' && tab[i][j+1] == 'p'){
               pretas = pretas+9;
            }
            
            if(tab[i][j] == 'r' && tab[i][j+1] == 'p'){
                pretas = pretas;
            }
            
        }
    }
    
   // printf("%d %d\n", brancas, pretas);
    if(pretas>brancas){
        printf("Negras");
    }
    else if (brancas>pretas){
       printf("Brancas");
    }
  else {
     printf("Empate");
  }
	return 0;
}