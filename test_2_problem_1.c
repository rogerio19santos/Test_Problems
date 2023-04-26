#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int mdc(int a, int b) { // algoritmo de euclides pra encontrar o mdc de dois n?meros (se ? igual a 1 s?o coprimos)
  if (b == 0) {
    return a;
  } else {
    return mdc(b, a % b);
  }
}



int is_prime(int x, int i) {
  if (x < 2) { // se x ? 0 ou 1, n?o ? primo
    return 0;
  } else if (x == 2 || i * i > x) { // se ? 2 ? primo, se o `i` atual ? maior que a raiz quadrada de x ? primo
    return 1;
  } else if (x % 2 == 0 || x % i == 0) { // se ? um n?mero par diferente de 2 n?o ? primo; se o `i` atual divide x, n?o ? primo
    return 0;
  } else {
    return is_prime(x, i + 1); // checa o pr?ximo i
  }
}


int somadigitos(int N, int contador){
  if (N%10 == 0) {
  contador = contador+N;
  return contador;
  }
 else  { 
      int d = N%10;
    contador = contador +d ;
    somadigitos((N-d)/10,contador);
  }
}

int factorial (int k){
   if ( k == 0){
    return 1;                  // fact(2)  -> return 2 *fact(1) = return 2
                               // fact(1) -- > return 1
} 
else  {
    return k*factorial(k-1);
}
}


void batalha(int p1, int p2, int i,double cf1, double cf2, int x){
    if (i<=x){
    int somafac = somadigitos(factorial(i), 0);
    //printf("%d\n", factorial(2));
  //  printf("%d", somadigitos(2,0));
 // printf("%d\n", somadigitos(factorial(2),0)); ok aq
 //cf1 = cf1+p1;
 
    if (is_prime(i,2) == 1){
       cf1 = 1.05*p1+cf1;
     //printf("%lf",cf1);
        
    }
    else if(is_prime(i,2) !=1) {
        cf1 = cf1+p1;
    }
   cf2 = cf2+p2;
    if (is_prime(somafac,2) == 1) { // � primo a soma?
        cf1 = cf1 +0.1*cf2;
        //printf("%lf",cf2);
        //printf("%lf",cf1);
        cf2 = 0.9*cf2;
       // printf("%lf",cf2); 
    }
   
    
    if (p2%somafac == 0){ // NAO ENTRA AQUI, ELE VAI AUMENTAR 12,17 
        cf2 = cf2+30;
   //printf("%lf", cf2); // ate aq ok
    }
    if (mdc(p2,i) == 1){
        
        cf2 = cf2 +0.1*cf1;
       // printf("%lf\n", cf2);
       // printf("%lf\n",cf2);
       cf1= 0.9*cf1;
       //printf("%lf\n",cf1);
    }
   
    
    
        batalha(p1,p2,i+1,cf1,cf2,x);
    
    }
    else {
        //printf("%lf %lf", cf1, cf2);
        if (cf1>cf2){
            printf("Kcaj Ganhou!\n");
            printf("%.2lf", cf1);
            return;
        }
        else {
            printf("Ordep Ganhou!\n");
            printf("%.2lf", cf2);
            return;
        }
    }
}


void loop(int i, int x){
        int p1, p2;
        scanf("%d %d", &p1, &p2);
        
        double cf1 = 0, cf2 = 0;
        batalha(p1,p2,i,cf1,cf2,x);
        
}


int main() {
    int x, i=1;
    scanf("%d", &x);
    loop(i,x);
	return 0;
}
