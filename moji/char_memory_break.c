#include <stdio.h>
#include <string.h>

void main(){

    char str1[5];
    char str2[10];

    strcpy(str1,"abcdef");

    printf(" str1 = [%s]\n str2 = [%s]\n\n", str1, str2);
 
    strcpy(str2, "abcdefghijk");
 
    printf(" str1 = [%s]\n str2 = [%s]\n", str1, str2);
}