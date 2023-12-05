#include<stdio.h>

void  inp(int *n , int arr[*n]){
    printf("enter the range");
    scanf("%d",n);
   
    for(int i=0;i<*n;i++){
         printf("enter a element");
scanf("%d",&arr[i]);
    }
}

int sum(int n,int arr[n]){
    int Sum = 0;
    for(int i=0;i<n;i++){
    Sum += arr[i];
    }
    return Sum;
}

int main(){
    int n,arr[n];
    inp(&n,arr);
  int sume =   sum(n,arr);
printf("%d",sume);
return 0;
}
