#include<stdio.h>
int input(){
       int n;
    printf("enter a no");
    scanf("%d",&n);
    return n;
}
int compare(int a, int b, int c){
    int lg;
    if(a>b&&a>c){
lg = a;
    }
        if(b>c&&b>a){
lg = b;
    }
        if(c>b&&c>a){
lg = c;
    }
    return lg;
}
void output(int lg){
printf("the largest no  is %d",lg);
}
int main(){
    int a,b,c,lg;
    a = input();
    b = input();
    c = input();
    lg = compare(a,b,c);
    output(lg);
    return 0;
}
