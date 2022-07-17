#include <stdio.h>


int main(void){

    int data[] = {1,2,3,4,5,6,7,8,9,10};

    int *p,*p1;

    //これで配列を渡せている
    p = data;

    for(int i=0;i<10;i++){
        printf("%d\n",p[i]);
    }

    //これだけ見るとdata[2]=3のアドレスだけ渡してるように見えるが、実はdata[2]を起点しているだけで実質配列そのものを渡している。
    p1 = &data[2];

    printf("%d %d %p\n",p1[0],*p1,p1);
    //アドレスをint分ずらしている。
    p1++;
    //添字演算を使えば前後にもアクセスできる。
    printf("%d %d %d\n",p1[-1],p1[0],p1[1]);


    return 0;
}