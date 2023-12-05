#include<stdio.h>
int input_size()
{
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    int i;printf("\nenter the element");
    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n]){
int lgi=0,i=1;
for(i =0;i<n;i++){
    if(a[i]>a[lgi]){
        lgi =i;
    }
}
return lgi;
}
void output(int index){
    printf("index is %d",index);
}
int main(){
    int n = input_size();
    int a[n];
    input_array(n,a);
   int lg = find_largest_index(n,a);
    output(lg);
    return 0;
}