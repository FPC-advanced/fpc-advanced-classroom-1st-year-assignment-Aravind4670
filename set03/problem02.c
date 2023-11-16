#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("enter the x coorginates  of the  triangle");
    scanf("%f%f%f",x1,x2,x3);
    printf("enter the y coordinates  fo the triangle");
    scanf("%f%f%f",y1,y2,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
      float dis1 = sqrtf(powf((x2-x1),2)+(powf(y2-y1),2));
      float dis2 = sqrt((powf(x3-x1),2)+(powf(y3-y1),2));
      float dis3 = sqrt((powf(x3-x2),2)+(powf(y3-y2),2));
      if(dis1 < dis2+dis3){return 1;}else{return 0;}
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
    if(result){
        printf("the points (%f %f),(%f %f) and (%f %f) is a triangle ",x1,y1,x2,y2,x3,y3);
    }
    else printf("the points (%f %f),(%f %f) and (%f %f) is not a triangle ",x1,y1,x2,y2,x3,y3);
}
int main(){
    int res;
    float x1,x2,x3,y1,y2,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    res = is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,res);
    return 0;
}