#include<stdio.h>
int input(){
    int n;
    printf("enter the no");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n){
  int t1 =0 ,t =1,f = 0,i;
for(i=0;f!=n;i++){
f= t1+t;
t1 = t;t =f;
}
return (i+1);}
void output(int n, int fibo){
    printf("%d is the %dth term",n,fibo);
}
int main(){
    int n = input();
    int f = find_fibo(n);
    output(n,f);return 0;
}
