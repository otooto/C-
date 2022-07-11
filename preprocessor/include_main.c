#include <stdio.h>

#include "include_test.h"

int main(void){

    //printfはstdio.hに定義されている。
    printf("include_main.cです\n");
    // 2つの変数はそれぞれinclude_test.hで定義している。
    printf("%d\n %c\n",include_test_head,include_test_char);
    // func1はinclude_test.hで定義している。
    printf("%d\n",func1(10,10));
    return 0;
}