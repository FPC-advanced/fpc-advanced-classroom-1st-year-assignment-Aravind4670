#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} nt;

typedef struct line {
    nt p1, p2;
    float distance;
} ne;

nt input_point(){
    nt a;
    printf("enter the x point");
    scanf("%f",&a.x);
   printf("enter the y point");
    scanf("%f",&a.y);
    return a;
}
ne input_line(){
    ne a;
    printf("enter the coordinates of the first point");
    a.p1 = input_point();
    printf("enter the coordinates of the second point");
    a.p2 = input_point();
    return a;
}
void find_length(ne *l){
        l->distance = sqrtf(powf(l->p2.x - l->p1.x,2) + powf(l->p2.y- l->p1.y,2));


}
void output(ne l){
    printf("x1,x2 %f",l.distance);
}
int main(){
    ne a;
    a = input_line();
    find_length(&a);
    output(a);
    return 0;
}