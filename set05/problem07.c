#include<stdio.h>
void input(char *name){
    printf("enter the name of the camel");
    scanf("%s",name);
}
int has_nice_name(char *c){
    int i=0;int vc,cc;
    for(i=0;c[i]!='\o';i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
vc++;
        }
        else{
cc++;
        }
    }
  if(vc>=2&&cc>=2){
    return 1;
  }
  else{
    return 0;
  }
}
void output(int res){
 if(res==1){
    printf("good name");

 }
 else if (res==0){
    printf("bad name");
 }
}
int main(){
    char s[100];int c;
 input(s);
c =has_nice_name(s);
output(c);
return 0;
}