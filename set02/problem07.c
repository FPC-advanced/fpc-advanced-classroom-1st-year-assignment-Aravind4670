#include<stdio.h>
typedef struct _triangle {
	float b,a,h;
} Triangle;

Triangle input_triangle(){
    Triangle a;
    printf("enter the base of the triange");
    scanf("%f",a.b);
      printf("enter the height of the triange");
    scanf("%f",a.h);
  return a;
}
void find_area(Triangle*t){
  t->a = t->b * t->h;
}
void output(Triangle t){
    printf("area is %f",t.a);
}

int main(){
    Triangle t;
    t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}