    #include<stdio.h>
#include<math.h>
typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n(){int n;
  printf("enter the no of sodes");
  scanf("%d",&n);
  return n;
}
Point input_point(char *promt_msg){Point p;
  printf("enter x and y of point %s",promt_msg);
  scanf("%f %f",&p.x,&p.y);
  return p;
}
void input_polygon(Polygon *p,int i){
char s[2];s[0] =  i;
  p->p[i] = input_point(s); 
}
float find_distance(Point a, Point b){
  
  float dis = sqrtf(powf((b.x-a.x),2)+powf((b.y-a.y),2));
  return dis;
}
void find_perimeter(Polygon* p){
  p->perimeter = p->sides * find_distance(p->p[0],p->p[p->sides-1]);
}
void output(Polygon p){
  printf("the perimeter is %f",p.perimeter);
}

int main(){
  Polygon oa;
  oa.sides = input_n();
  int i =0;
  for(i=0;i<oa.sides;i++){
    input_polygon(&oa , i);
}
find_perimeter(&oa);
output(oa);
return 0;
}