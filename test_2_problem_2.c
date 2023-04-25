#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int somadigitos(int N, int contador){
  if (N%10 == N) {
  contador = contador+N;
  return contador;
  }
 else  { 
      int d = N%10;
    contador = contador +d ;
    somadigitos((N-d)/10,contador);
  }
}


void loop(int i, int N, int arr[]){
   if (i<N){
       int a;
       scanf("%d", &a);
       //printf("%d", a);
       arr[i] =a;
       //printf("%d", arr[i]);
       loop(i+1,N,arr);
   }
   else {
       int o;
       scanf("%d", &o);
      // printf("%d", arr[o]);
       int dop = somadigitos(arr[o],0);
       printf("%d",dop);
   }
}


int main() {
    int N, i =0;
    scanf("%d", &N);
    //printf("%d", N);
    int arr[N];
    loop(i, N,arr);
	return 0;
}