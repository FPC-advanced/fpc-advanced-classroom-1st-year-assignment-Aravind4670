#include<stdio.h>
void input(char *str1,char*str2){
    printf("enter first string");
    scanf("%s",str1);
    printf("enter 2nd string");
    scanf("%s",str2);
}
int result(char  *str1,char*str2){
    int i;
    for ( i=0;*(str1+i)==*(str2+i)&&*(str1+i)!='\0'&&*(str2+i);i++);
    if(*(str1+i)>*(str2+i)){
        return 1;
    }
        if(*(str2+i)>*(str1+i)){
        return 2;
    }
    else{
        return 3;
    }
}
void out(char *str1,char *str2,int res){
    switch(res){
        case 1:printf("%s",str1);break;
        case 2:printf("%s",str2);break;
        case 3:printf("thy are equal");break;
        default:break;
    }
}
int main(){
    char str1[100],str2[100];
     input(str1,str2);
int res;
res = result(str1,str2);
out(str1,str2,res); 
    return 0;
}