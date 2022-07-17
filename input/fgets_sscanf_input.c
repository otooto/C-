#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c,d,n;

    double d1;

    char mojiretu[20];

    puts("入力してください");

    fgets(mojiretu,sizeof(mojiretu),stdin);
    
    // sscanfの戻り値は変換を１つも行えないとEOF,それ以外には代入が出来た個数を返す。
    n = sscanf(mojiretu,"%d %d %d %lf",&a,&b,&c,&d1);

    if( n == EOF ){
        puts("EOF");
        exit(1);
    }

    //
    printf("%d %d %d %lf %d\n",a,b,c,d1,n);


    return 0;


}