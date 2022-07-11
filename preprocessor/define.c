#include <stdio.h>

#define test

#ifndef test
    //define testがあると呼ばれない
    printf("testは宣言されてないです");
#endif

#ifdef test
    //define testがあると呼ばれる
    printf("testは宣言されています");
#endif