#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction(){
    Fraction a;
     printf("enter the first fraction");
    scanf("%d%d",&a.num,&a.den);
return a;
}

Fraction add_fractions(Fraction f1, Fraction f2){
    Fraction f;
    f1.num =f1.num*f2.den;
    f2.num =f2.num*f1.den;
    f.num = f1.num + f2.num;
    f.den = f1.den*f2.den;
    return f;
}
void output(Fraction f1, Fraction f2, Fraction sum){
    printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main(){
Fraction f1,f2,s;
f1= input_fraction();
f2 = input_fraction();
s = add_fractions(f1,f2);
output(f1,f2,s);
return 0;
}