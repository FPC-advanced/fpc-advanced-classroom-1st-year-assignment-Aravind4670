/*
 - sick when its `stomach_radius` is less than `height` and less than `length`
 - happy when its `height` is less than `length` and less than `stomach_radius`.
 - tense when its `length` is less than `height` and `stomach_radius`.

***Function Declarations***

```c*/
void input_camel_details(float *radius, float *height, float *length){
      printf("enter the radius of the hump");
    scanf("%f",radius);
    printf("enter the height of the hump");
    scanf("%f",height);
    printf("enter the lenght of the hump");
    scanf("%f",length);
}
int find_mood(float r, float h, float l){
    if(r<h &&r<l){
        return 1;
    }
    if(h<l&&h<r){
        return 2;
    }
    if(l<h&&l<r){
        return 3;
    }
}
void output( int mood){
    switch(mood){
        case 1:
        printf("camel is sick");
        break;
        case 2:
        printf("the camel is happy");
        break;
        case 3:
        printf("the came is tense");
        break;
        default:printf("IDK");
        break;
    }

}
int main(){
    float r,h,l;
    input_camel_details(&r,&h,&l);
    int mood =find_mood(r,h,l);
    output(mood);
    return 0;
}