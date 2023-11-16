#include<Stdio.h>
int input(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a, int b){
 
    while(a!=b){
if(a>b){
    a-=b;
}
if(b>a){b-=a;}}
   return a;
}
void output(int gcd)
{
    printf("%d",gcd);
}
int main(){
    int a =input(),b = input();
    int gcd = find_gcd(a,b);

    output(gcd);
    return 0;
}