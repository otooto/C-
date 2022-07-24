#include <stdio.h>

int Test(int a,int b,int c,int d,int e,int f,int g,int h,int i);


int Test(int a,int b,int c,int d,int e,int f,int g,int h,int i){
    int a1,a2;
    puts("関数内");
    printf("%p %p %p %p %p %p %p %p %p\n",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    puts("関数内ローカル");
    printf("%p,%p\n",&a1,&a2);
    return 0;
}

int main(void){

    int a,b,c,d,e,f,g,h,i;
    puts("mainでの呼び出し");
    printf("%p %p %p %p %p %p %p %p %p\n",&a,&b,&c,&d,&e,&f,&g,&h,&i);

    Test(a,b,c,d,e,f,g,h,i);
    

}
