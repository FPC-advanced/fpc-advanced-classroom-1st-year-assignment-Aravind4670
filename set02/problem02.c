#include<stdio.h>
int input_side(){
    int s;
    printf("enter a side");
   return (scanf("%d",&s));
}
int check_scalene(int a, int b, int c){
    if(a==b&&a==c) return 1;
    else return 0;
}
void output( int isscalene){
    if(isscalene)printf("scalene");
    else printf("not scalene");
}
int main(){
    int a,b,c,res;
    a = input_side(); b = input_side(); c = input_side();
    output(res);
    return 0;
}