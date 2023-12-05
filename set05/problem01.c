#include<stdio.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input(){Point p;
    printf("enter x and y co ordinates");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
void dist(Point a, Point b, float *res){
    *res =    sqrtf(powf((b.x,a.x),2)-powf((b.y,a.y),2));
    return res;
}
void output(Point a, Point b, float res){
    printf("dis (%f,%f) and (%f,%f) is ",a.x,a.y,b.x,b.y,res);
}
int main(){
    Point a,b;float res;
    a = input();
    b = input();
    dist(a,b,&res);
    output(a,b,res);
    return 0;
}