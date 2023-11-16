#include<stdio.h>
int input_array_size(){int n;
    printf("enter array sixe");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    printf("enter the element");
    int i =0;
    for (i=0;i<n;i++){
        scanf("%d",a[i]);

    }
    
}
int sum_composite_numbers(int n, int a[n]){
       int i ;int sum;
    for(i=0;i<=11;i++){
    if (n%i==0&&n!=3&&n!=2&&n!=5&&n!=7&&n!=11){sum +=a[i];
    }
    
    return sum;
}}
void output(int sum){
printf("%d",sum);
}
int main(){
    int n = input_array_size(),arr[n],sum;
  
   input_array(n,arr);
  sum =  sum_composite_numbers(n,arr);
output(sum);
return 0;
}