#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    puts("入力してください");
    //char str[] = "300 400 500";
    char str[100];
    char delim[] =" \n";
    char *token;

    int num;

    fgets(str,sizeof(str),stdin);

    // 第1引数 分離したい文字列が格納された配列やメモリのアドレス、第2引数 区切り文字
    token = strtok(str,delim);

    while (token != NULL) {
        /* 分離後の文字列を表示 */

        num = atoi(token);

        printf("token = %s num = %d atoi(token) = %d sizeof(num) = %ld\n", token,num,atoi(token),sizeof(num));

        /* 文字列を分離 */
        token = strtok(NULL, delim);
    }

    return 0;
}