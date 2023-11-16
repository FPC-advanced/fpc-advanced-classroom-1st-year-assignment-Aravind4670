#include<stdio.h>
int range(){
    int n;
    printf("input the range of numbers\n");
    scanf("%d",&n);
    return n;
}

int input(){
    int a;
    printf("input a number");
    scanf("%d",&a);
    return a;
}
int adding(int n,int arr[n]){
    int sum =0;int i;
    for(i=0;i<=n;i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
   int i,n;int s;

n=range();int arr[n];
for(i=0;i<=n;i++){
    arr[i]=input();
}
s=adding(n,arr);
printf("sum=%d",s);
return 0;
}