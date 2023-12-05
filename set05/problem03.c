#include<stdio.h>
//weight = pi * stomach_radius^3 * sqrt(height * length)`

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input(){Camel c;
       printf("enter the radius of the hump");
    scanf("%f",&c.radius);
    printf("enter the height of the hump");
    scanf("%f",&c.height);
    printf("enter the lenght of the hump");
    scanf("%f",&c.length);
    return c;
}
float find_weight(Camel c){
    c.weight = 3.14* powf(c.radius,3) * sqrtf(c.height * c.length);
    return c.weight;
}

void output(Camel c){
printf("the weight of the camel is %f",c.weight);
}

int main(){
    Camel c;
    c = input();
    c.weight = find_weight(c);
    output(c);
    return 0;
}