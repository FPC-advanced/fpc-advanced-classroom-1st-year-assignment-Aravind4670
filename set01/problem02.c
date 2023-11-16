//2. Write a C program to add two numbers.
#include<stdio.h>
int input(){
    int n;
    printf("enter a no");
    scanf("%d",&n);
    return n;
}

int sum(int a,int b){
    int s = 0;
    s = a+b;
    return s;
}
void out(int sum){
    printf("the sum is %d",sum);
}
int main(){
    int a,b,su;
    a = input();
    b = input();
    su = sum(a,b);
    out(su);
    return 0;
}
