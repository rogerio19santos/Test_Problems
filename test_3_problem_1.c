#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 1 2 3 4 5
int simulasoma_rev(int cara1, int cara2, int cara3, int arr[], int x, int i){
    if (i==-1){
        return 0;
    }
    if (cara1+cara2+cara3 == x){
        //printf("%d", arr[i]);
        return 1;
    }//  cara1 ? o ultimo elemento da array, 2 o penultimo
    
    simulasoma_rev(cara1,arr[i-1],arr[i-1],arr,x,i-1);
}


int simulasoma(int cara1, int cara2, int cara3, int arr[], int x, int n, int i){
    if (i==n-1){
        return 0;
    }
    if (cara1+cara2+cara3 == x){
        //printf("%d", arr[i]);
        return 1;
    }
    simulasoma(cara1,cara2,arr[i+2],arr,x,n,i+1);
}

int simulasoma2(int cara1, int cara2, int cara3, int arr[], int x, int n, int i){
    if (i==n-1){
        return 0;
    }
    if (cara1+cara2+cara3 == x){
        //printf("%d", arr[i]);
        return 1;
    }
    simulasoma2(cara1,arr[i+1],arr[i+2],arr,x,n,i+1);
}

void soma(int arr[], int n, int i, int x){
    if (i==n){
        printf("Aurelio perdeu a aposta");
        return;
    }
    /*if (arr[i]+arr[i+1]+arr[i+2]>x){
        printf("Aurelio perdeu a aposta");
        return;
    }*/
    else {
        int k = simulasoma(arr[i],arr[i+1],arr[i+2],arr,x,n,0);
        int j = simulasoma2(arr[i],arr[i+1],arr[i+2],arr,x,n,0);
        int q = simulasoma_rev(arr[n-1],arr[n-2],arr[n-3],arr,x,n-3);
        if (k==1 || j==1 || q == 1 ){
            printf("Aurelio ganhou a aposta");
            return;
        }
        //soma(arr,n,i+1,x);
    }
    soma(arr,n,i+1,x);
}





void ler_array(int arr[], int n, int i){
    if (i==n){
        return;
    }
    scanf("%d", &arr[i]);
    ler_array(arr,n,i+1);
}

void loop(int x, int n){
    int arr[n];
    ler_array(arr,n,0);
  //  sort(arr,n);
    soma(arr,n,0,x);
   // printf("%d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}


int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    loop(x,n);
    
	return 0;
}