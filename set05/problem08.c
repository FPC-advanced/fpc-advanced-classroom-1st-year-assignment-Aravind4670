
/*> `total_truck_weight = truck_weight + weight_of_camels`

***Function Declarations***
```c*/
typedef struct _camel {
    float radius, height, length, weight;
} Camel;
int size(){
    int n;
    printf("enter the range");
    scanf("%d",&n);
    return n;
}
void input(int n, Camel c[n], float *truck_weight){int i;
    for(i=0;i<n;i++){
        printf("enter the %d camel",i);
    printf("enter the radius of the hump ");
    scanf("%f",c[i].radius);
    printf("enter the height of the hump");
    scanf("%f",c[i].height);
    printf("enter the lenght of the hump");
    scanf("%f",c[i].length);
     }
 printf("truck weight enter ");
 scanf("%f",truck_weight);
}
void find_camel_weight(int n, Camel c[n]){int i;
    for(i=0;i<n;i++){
     c[i].weight = 3.14* powf(c[i].radius,3) * sqrtf(c[i].height * c[i].length);
}}
float compute_total_weight(int n, Camel c[n], float truck_weight){
    float weight;
    int i=0;
    for(i=0;i<n;i++){
 weight+=c[i].weight;
    }
    float tot = truck_weight+weight;
    return tot;
}
void output(float total_weight){
    printf("thw totla weight",total_weight);
}
int main(){
    int n = size();Camel a[n];float tw;
   input(n,a,&tw);
   find_camel_weight(n,a);
   float tt = compute_total_weight(n,a,tw);
   output(tt);
   return 0;
}