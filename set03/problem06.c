#include <stdio.h>

void input_string(char* a, char* b) {
    printf("Enter the string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int i, j;
    for (i = 0; string[i] != '\0'; i++) {
        for (j = 0; substring[j] != '\0' && string[i + j] == substring[j]; j++);
        if (substring[j] == '\0') {
            return i;
        }
    }
    return -1; 
}

void output(int index) {
    if (index != -1) {
        printf("The substring starts at index %d\n", index);
    } else {
        printf("Substring not found in the given string\n");
    }
}

int main() {
    int i;
    char str[100], subs[100];
    input_string(str, subs);
    i = sub_str_index(str, subs);
    output(i);
    return 0;
}
