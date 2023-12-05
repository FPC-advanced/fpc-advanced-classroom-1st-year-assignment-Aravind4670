#include<stdio.h>
int input_n(){int n;
    printf("enter the size");
    scanf("%d",&n);
    return n;
}
void input(int n, int a[n]){int i;printf("enter the elements");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
}
float odd_average(int n, int a[n]){
    int i;int c;float avg,sum;
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
c++;
       sum+=a[i];
        }
    } 
    avg = sum/c;
    return avg;
}
void output(float avg){
    printf("the avg is %f",avg);
}
int main(){
    int n = input_n();
    int a[n];
    input(n,a);
    float avg = odd_average(n,a);
    output(avg);
    return 0;
}