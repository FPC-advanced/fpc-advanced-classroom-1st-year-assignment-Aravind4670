#include<stdio.h>
void input_n_and_r(int *n, int *r){
    printf("enter n");
    scanf("%d",n);
    printf("enter r");
    scanf("%d",r);
}
int nCr(int n, int r){int ncr =0;
int i;int N =1,R=1,C=1;

for(i=1;i<=n;i++){
    printf("\nn=%d i =%d",N,i);
    N = N*i;
}
printf("n!=%d",N);

for(i=1;i<=r;i++){
     R=R*i;
}
for(i=1;i<=(n-r);i++){
    C = C*i;
}
printf("r!=%d",R);
     ncr = N / (R*C);
     return ncr;
     }
void output(int n, int r, int result){
     printf("n=%d r=%d result = %d",n,r,result);
}
int main(){
     int n,r;int ncr;
     input_n_and_r(&n,&r);
     ncr = nCr(n,r);
     output(n,r,ncr);
     return 0; 
}