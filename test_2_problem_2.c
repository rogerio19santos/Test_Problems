#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){ // SCANEIA
    int A, G, R, H; // valores iniciais dados por eles
    char la, lg, lr, lh; // letras escolhidas por eles, que podem ser a, b, c ou d
    int v1, v2, v3, v4; // valores dados pelo juiz para cada uma das letras
    int vA, vG, vR, vH; // valores que cada um vao receber de acordo com a letra que escolherem
    double media;
    scanf("%d %d %d %d  %c  %c  %c  %c %d %d %d %d", &A, &G, &R, &H, &la, &lg, &lr, &lh, &v1, &v2, &v3, &v4);
    
    if (la == 'a'){ // se a letra q Anderson escolher for a, ele recebe o valor q o juiz deu pra a
        vA = v1;
    } else if (la == 'b'){
        vA = v2;
    } else if (la == 'c'){
        vA = v3;
    } else if (la == 'd'){
        vA = v4;
    }
    
    if (lg== 'a'){ // se a letra q Guilherme escolher for a, ele recebe o valor q o juiz deu pra a
        vG = v1;
    } else if (lg == 'b'){
        vG = v2;
    } else if (lg == 'c'){
        vG = v3;
    } else if (lg == 'd'){
        vG = v4;
    }
    
    if (lr == 'a'){ // se a letra q Rita escolher for a, ela recebe o valor q o juiz deu pra a
        vR = v1;
    } else if (lr == 'b'){
        vR = v2;
    } else if (lr == 'c'){
        vR = v3;
    } else if (lr == 'd'){
        vR = v4;
    }
    
    if (lh == 'a'){ // se a letra q Anderson escolher for a, ele recebe o valor q o juiz deu pra a
        vH = v1;
    } else if (lh == 'b'){
        vH = v2;
    } else if (lh == 'c'){
        vH = v3;
    } else if (lh == 'd'){
        vH = v4;
    }
    // FALTOU FAZER A MEDIA.
    media = (A+G+R+H)/4;
   if (0 <= media && media <= 10){
     vA = A +vA +(0.4*vA);
      vG = G +vG +(0.4*vG);
       vR = R +vR +(0.4*vR);
        vH = H +vH +(0.4*vH);
   } 
   else if (10 < media && media <= 30){
       vA = A +vA +(0.6*vA);
      vG = G +vG +(0.6*vG);
       vR = R +vR +(0.6*vR);
        vH = H +vH +(0.6*vH);
   }
   else if (30 < media && media <= 60){
       vA = A +vA +(0.8*vA);
      vG = G +vG +(0.8*vG);
       vR = R +vR +(0.8*vR);
        vH = H +vH +(0.8*vH);
   }
    else if (media > 60){
        vA = A +vA +(1*vA);
      vG = G +vG +(1*vG);
       vR = R +vR +(1*vR);
        vH = H +vH +(1*vH);
        
    }
    
    
    if (vA < vG && vA < vR && vA < vH){
        printf("Anderson quem vai pagar o lanche!:D");
    }
    else if (vG < vA && vG < vR && vG < vH){
        printf("Guilherme quem vai pagar o lanche!:D");
    }
    else if (vR < vA && vR < vG && vR < vH){
        printf("Rita quem vai pagar o lanche!:D");
    }
    else if (vH < vA && vH < vR && vH < vG){
        printf("Higor quem vai pagar o lanche!:D");
    }
    
    return 0;
}