#include<stdio.h>
int inp(int *a,int *b ,int *c){
   
    printf("enter a no");
    scanf("%d%d%d",a,b,c);
   
}

void check(int a,int b,int c ,int *r,int *lg){

 
 if(a>b&&a>c)
    {*lg=a;*r=0;}
   else if(b>a&&b>c){
        *lg =b;*r=0;
    }
  else if(c>a&&c>b){
        *lg=c;*r=0;
    }
    else{
   *r=1;
       }
    }

void out(int lg,int r){
    if(r!=1){
        printf("the largest no %d",lg);
    }else{
        printf("thy are equal");
    }
}

int main(){
    int a,b,c,lg,r;
    printf("enter 3 numbers");
  inp(&a,&b,&c);
 check(a,b,c,&r,&lg);
 out(lg,r);
    return 0;
    }

