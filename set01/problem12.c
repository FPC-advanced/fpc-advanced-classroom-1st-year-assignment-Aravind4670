struct _complex {
	float r,im;
};
typedef struct _complex Complex;

int get_n(){int n;
     printf("enter no of no");
     scanf("&d",&n);
     return n;
}
Complex input_complex(){
    Complex a;
       printf("enter a real");
    scanf("%f",&a.r);
    printf("enter a imag");
    scanf("%f",&a.im);
return a;
}
void input_n_complex(int n, Complex c[n]){
    int i=0;
    for(i=0;i<n;i++){
        printf("enter the complex no \n\n");
     c[i] = input_complex();
    }

}
Complex add(Complex a, Complex b){
        Complex sum;
    sum.r = a.r+b.r;
    sum.im = a.im+b.im;
    return sum;
}
Complex add_n_complex(int n, Complex c[n]){
    Complex a;
    int i;
    for(i=0;i<n;i++){
       a = add(c[i],c[i+1]);
    }
    return a;
}
void output(Complex result){
printf("%f + %fi",result.r,result.im);
}
int main(){
    int n = get_n();Complex a[n];
    input_n_complex(n,a);
   Complex b =  add_n_complex(n,a);
    output(b);
    return 0;
}