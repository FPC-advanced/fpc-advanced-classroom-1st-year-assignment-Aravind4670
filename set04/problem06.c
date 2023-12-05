#include<stdio.h>
#include<string.h>
void input_string(char *a){
    printf("enter a string");
    scanf("%[^\n]s",a);
    printf("%s",a);
}
int count_words(char *string){
    int i=0;
    char *token;token = strtok(string," ");
    while(token!=NULL){
        i++;
        token = strtok(NULL," ");
    }
    return i;
}
void output(char *string, int no_words){
    printf("%s has %d no of words",string,no_words);

}
int main(){
    char a[100];int n;
    input_string(a);
  n =   count_words(a);
output(a,n);
return 0;
}