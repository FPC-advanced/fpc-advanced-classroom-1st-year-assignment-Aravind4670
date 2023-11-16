#include<stdio.h>
float  input(){float  n;
    printf("input the no");
    scanf("%f",&n);
    return n;
}
float sqroot(float n){

    //x1 = (x0 + S / x0) / 2.
    float x,X;float ns;int c = 0;
    
  x = n/2;
  while(c!=5){
  X = (x+n/x)/2;
  ns = (X +n/x)/2;
  x = ns;
  c++;
  }
return X;
}
void out(float x){
  printf("the sqrt is %f",x);
}
int main(){
  float  n = input();
  float sq = sqroot(n);
  out(sq);
  return 0;
}