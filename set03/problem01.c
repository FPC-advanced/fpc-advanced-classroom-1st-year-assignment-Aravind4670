#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2){
    printf("enter the x and y for pont 1");
    scanf("%f%f",x1,y1);
    printf("enter the point 2");
      scanf("%f%f",x2,y2);
    }
float find_distance(float x1, float y1, float x2, float y2){
    float dis = sqrtf(powf((x2-x1),2)-powf((y2-y1),2));
    return dis;
}
void output(float x1, float y1, float x2, float y2, float distance){
    printf("the distance between the  points (%f%f) and (%f%f) is %f",x1,y1,x2,y2,distance);
}
int main(){
    float x1,x2,y1,y2,dis;
    input(&x1,&y1,&x2,&y2);
    dis = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,dis);
    return 0;
}