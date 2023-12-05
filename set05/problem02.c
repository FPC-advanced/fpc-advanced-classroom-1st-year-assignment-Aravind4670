#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length){
    printf("enter the radius of the hump");
    scanf("%f",radius);
    printf("enter the height of the hump");
    scanf("%f",height);
    printf("enter the lenght of the hump");
    scanf("%f",length);
}
float find_weight(float radius, float height, float length){
    float weight = 3.14* powf(radius,3) * sqrtf(height * length);
    return weight;
}
void output( float weight){
printf("weight of the camel is %f",weight);
}

int main(){
    float r,h,l,weight;
    input_camel_details(&r,&h,&l);
    find_weight(r,h,l);
    output(weight);
    return 0;
}