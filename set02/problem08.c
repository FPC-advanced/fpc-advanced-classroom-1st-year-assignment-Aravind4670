#include<stdio.h>
typedef struct _triangle {
	float b,h, a;
} Triangle;
int input_n(){
    Triangle a;
        printf("enter the base of the triange");
    scanf("%f",&a.b);
      printf("enter the height of the triange");
    scanf("%f",&a.h);
    a.a = a.b*a.h;
    return a.a;
}
int main(){
    int a,b;
    a = input_n();
    b = input_n();
    if(a>b){
        printf("a is greater ");

    }
    else if(b>a){
        printf("b is greater");
    }
    else {
        printf("thy r equal");
    }
    return 0;
}