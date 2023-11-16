#include<stdio.h>
void input_string(char* a, char* b)
{
    printf("enter the string1");
    scanf("%s",a);
    printf("enter the substring");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring){
int i,c = 0;
for(i =0;string[i]!=*substring;i++);
return i;
}
void output(int index){
    printf("the index is %d",index);
}
int main(){
    int i;
    char str[100],subs[100];
     input_string(str,subs);
   i =   subs_Str_index(str,subs);
   output(i);
   return 0;
}