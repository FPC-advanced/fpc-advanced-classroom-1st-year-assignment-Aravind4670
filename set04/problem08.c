#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

int input_n(){int n;
    printf("enter the no of fractions");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction(){
    Fraction a;
     printf("enter the first fraction");
    scanf("%d%d",&a.num,&a.den);
return a;
}
void input_n_fractions(int n, Fraction f[n]){int i;
    for(i=0;i<n;i++){
        f[i] = input_fraction();
    }
}

Fraction add_fractions(Fraction f1, Fraction f2){
       Fraction f;
       if(f1.den!=f2.den){
    f1.num =f1.num*f2.den;
    f2.num =f2.num*f1.den;}
    f.num = f1.num + f2.num;
    f.den = f1.den*f2.den;
    return f;
}
Fraction add_n_fractions(int n, Fraction f[n]){
    int i;
    Fraction sum ={0,1};
    for(i=0;i<n;i++){
   sum = add_fractions(sum,f[i]);
    }
    return sum;
}
void output( Fraction sum){
printf("the sum of the fraction is %d/%d",sum.num,sum.den);
}
int main(){
    int n =input_n();
    Fraction f[n],sum;
    input_n_fractions(n,f);
sum = add_n_fractions(n,f);
output(sum);
return 0;
}