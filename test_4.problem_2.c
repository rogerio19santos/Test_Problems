#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//chega no  == BREAK


// diag direita pra cima x-1, y+1
// diag direita pra baixo x+1, y+1
// diag esquerda pra cima x-1, y-1
// diag direita pra baixo x+1, y+1
int atq_and(int n, int count_a, int matrix[n][n], int x, int y, int z, int k){
for(int i = x-1 ; i>-1; i--){ // PRA CIMA
int j = y;
    if(matrix[i][j] == 1){
        matrix[i][j] = 0;
        count_a++;
        break;
    }
    if(matrix[i][j] == 0 && i==z && j == k){
        break;
    }
}
    for(int i = x+1 ; i<n; i++){ // PRA BAIXO
    int j = y;
    if(matrix[i][j] == 1){
        matrix[i][j] = 0;
        count_a++;
        break;
    }
    if(matrix[i][j] == 0 && i==z && j == k){
        break;
    }
    }
    
    for(int j= y-1 ; j>-1; j--){ // PRA ESQUERDA
    int i = x;
    if(matrix[i][j] == 1){
        matrix[i][j] = 0;
        count_a++;
        break;
    }
    if(matrix[i][j] == 0 && i==z && j == k){
        break;
    }
    }
     for(int j= y+1 ; j<n; j++){ // PRA DIREITA
     int i = x;
    if(matrix[i][j] == 1){
        matrix[i][j] = 0;
        count_a++;
        break;
    }
    if(matrix[i][j] == 0 && i==z && j == k){
        break;
    }
    }
    
    return count_a;
}




int atq_luiza(int n, int count_l, int matrix[n][n], int z, int k, int x, int y){
    int i = z, j = k;
    int c = j, o = j, w = j, q = j;
   for(int i = z; i>-1; i--){ // DIAG DIREITA PRA CIMA
       
       if(c >=n){
           break;
       }
       if (matrix[i][c] == 1){
           count_l++;
           matrix[i][c] = 0;
           //printf("%d o%d\n", i, c);
           //printf("%d\n", count_l);
           break;
       }
       if(matrix[i][c] == 0 && i==x && c==y){
           break;
       }
       c++;
   }
   
   for(int i = z; i<n; i++){ // DIAG DIREITA PRA BAIXO
       
       if(o >=n){
           break;
       }
       if (matrix[i][o] == 1){
           count_l++;
           matrix[i][o] = 0;
          //printf("%d %d\n", i, o);
           //printf("%d\n", count_l);
           break;
       }
       if(matrix[i][o] == 0 && i==x && o==y){
           break;
       }
       o++;
   }
   
   for(int i = z; i<n; i++){ // DIAG ESQUERDA PRA BAIXO
      
       if(w<= -1){
           break;
       }
       if (matrix[i][w] == 1){
           count_l++;
           matrix[i][w] = 0;
           //printf("%d %d\n", i, w);
           //printf("%d\n", count_l);
           break;
       }
       if(matrix[i][w] == 0 && i==x && w==y){
           break;
       }
       w--;
   }
   
    for(int i = z; i>=-1; i--){ // DIAG ESQUERDA PRA CIMA
       
       if(q <= -1){
           break;
       }
       if (matrix[i][q] == 1){
           count_l++;
           matrix[i][q] = 0;
     //      printf("%d %d\n", i, q);
   //        printf("%d\n", count_l);
           break;
       }
       if(matrix[i][q] == 0 && i==x && q==y){
           break;
       }
       q--;
   }
   
    return count_l;
}



int main() {
    //luiza --> diagonais
    // anderson --> cima baixo
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int z,k,x,y;
    scanf("%d %d", &z, &k);
    scanf("%d %d", &x, &y);
    int count_l = atq_luiza(n,0,matrix,z,k, x, y);
   // printf("%d", count_l);
   int count_a = atq_and(n,0,matrix,x,y,z,k);
   printf("aziul matou %d\n", count_l);
   printf("nosredna matou %d", count_a);
    return 0;
}