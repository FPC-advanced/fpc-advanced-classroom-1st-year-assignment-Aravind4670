#include<stdio.h>
void inputs(char *a){
    printf("enter a word");
    scanf("%s",a);
}
void reverse(char *a,char *b){
    printf("%s",a);
    int i,j = 0,n;
    for(i=0;a[i]!='\0';i++);n =i;
  for (i=n-1;a[i]!=a[0];i--){
  

   *(b+j) = *(a+i);  j++;
  }
  *(b+j) = '\0';
 }
void out(char *a){
    printf("%s",a);
}
int main(){
    char str[100],str1[100];
    inputs(str);
    reverse(str,str1);out(str1);
    return 0;
}