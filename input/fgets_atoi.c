#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;

    char c[20];

    fgets(c,sizeof(c),stdin);
    i = atoi(c);

    printf("i = %d i(size) = %ld int(size) = %ld\n",i,sizeof(i),sizeof(int));

    return 0;
}