#include<stdio.h>
 
void input(float *base, float *height){
    printf("enter height and base");
    scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area){
    *area = 0.5 * base *height;

}
void output(float base, float height, float area){
    printf("%f*%f*0.5",area);
}
int main(){
    float h,b,area;
    input(&h,&b);
    find_area(b,h,&area);
    output(h,b,area);
    return 0;
}