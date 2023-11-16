#include<stdio.h>
void  inp(int n , int arr[n]);
int sum(int arr[],int n);
void  inp(int n , int arr[n]){
    printf("enter the range");
    scanf("%d",&n);
    printf("enter a element");
    for(int i=0;i<=n;i++){
scanf("%d",&arr[i]);
    }
}

int sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
    sum += arr[i];
    }
    return sum;
}

int main(){
    int n,arr[n];
    inp(n,arr);
  int sume =   sum(arr,n);
printf("%d",sume);
return 0;
}
