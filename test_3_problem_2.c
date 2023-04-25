#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printa_array(int arr[], int n, int i){
    if (i==n){
        return;
    }
    if(i == n-1){
        printf("%d", arr[i]);
    }
 else { 
     printf("%d ", arr[i]);
 }
    printa_array(arr,n,i+1);
}



void bubble(int arr[], int i,int N){
        if (i == N-1){
            return;
        }                                 // essa coloca o maior no final
    else {
        if (arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        bubble(arr,i+1,N);
    }
    return;
}
void sort(int arr[], int N) {
    if (N == 1){
        return;
    }
    else {
        bubble(arr,0,N); // coloca o maior cara no fim
        sort(arr,N-1); // vai colocando o maior cara no fim e dps tira ele e repete pra todos antes
    }
    return;
}


void bubble_rev(int arr[], int i,int N){
        if (i == N-1){
            return;
        }                                 // essa coloca o maior no final
    else {
        if (arr[i] < arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        bubble_rev(arr,i+1,N);
    }
    return;
}



void sort_rev(int arr[], int N) {
    if (N == 1){
        return;
    }
    else {
        bubble_rev(arr,0,N); // coloca o maior cara no fim
        sort_rev(arr,N-1); // vai colocando o maior cara no fim e dps tira ele e repete pra todos antes
    }
    return;
}


void ler_array(int arr[], int n, int i){
    if (i==n){
        return;
    }
    scanf("%d", &arr[i]);
    ler_array(arr,n,i+1);
}


void loop(int n, int i){
    if (i>n){
        return;
    }
    else {
        int t[10];
        ler_array(t,10,0);
        sort(t,10);
        printf("turma %d:\n", i);
        printa_array(t,10,0);
        printf("\n");
        sort_rev(t,10);
        printa_array(t,10,0);
        printf("\n");
    }
    loop(n,i+1);
}


int main() {
    int n;
    scanf("%d", &n);
    //int t1[10], t2[10];
    loop(n,1);
	return 0;
}