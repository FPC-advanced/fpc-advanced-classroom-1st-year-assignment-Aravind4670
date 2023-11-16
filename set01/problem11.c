#include<stdio.h>
struct _complex {
	float r;
	float im;
};
typedef struct _complex x;

x input_complex(){
x a;
    printf("enter a real");
    scanf("%f",&a.r);
    printf("enter a imag");
    scanf("%f",&a.im);
return a;
}
x add_complex(x a,x b){
    x sum;
    sum.r = a.r+b.r;
    sum.im = a.im+b.im;
    return sum;
}
void output(x sum) {
printf("%f+%fi",sum.r,sum.im);
}
int main(){
x a,b,sum;
a = input_complex();
b = input_complex();
sum =add_complex(a,b);
output(sum);
}
