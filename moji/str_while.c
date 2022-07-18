#include <stdio.h>

int main(){

    char str[6];
    int i = 0;
    //input = hello
    fgets(str,sizeof(str),stdin);

    while (str[i] != '\0') {
        printf("%c\n",str[i]);
        printf("%d\n",i);
        i++;
    }
    //str[5] = \0 になっている。

    return 0;
}