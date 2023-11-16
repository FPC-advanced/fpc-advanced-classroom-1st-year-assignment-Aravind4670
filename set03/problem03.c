#include<stdio.h>
int input_number(){
    int n;
    printf("enter the no");
    scanf("%d",&n);
    return n;
}
int is_prime(int n){
    
    if(n==1){
        return 0;
    }
if(n==2||n==3||n==5||n==7){
return 1;
}

else if(n%2==0||n%3==0||n%5==0||n%7==0||n%11==0){
    return 0;
}
else{
    return 1;
}
}
void output(int n, int result){
    if(result) {
    printf("%d is a prime no");}
    else printf("it is not a prime no");
    }
int main(){
int n,res;
n = input_number();
res = is_prime(n);
output(n,res);
return 0;
}