#include <stdio.h>
#include <stdint.h>

struct memory {
    int i;
    double d;
    char c;
    double d2;
};


struct nemory {
    double d;
    double d2;
    int i;
    char c;
};

int main(){

    struct memory st;

    printf("st = %ld\n",sizeof(st));
    printf("st = memory(%d)   %p\n",sizeof(st),&st);
    printf("st_i = int(%d)     %p\n",sizeof(st.i),&st.i);
    printf("st_d = double(%d)  %p\n",sizeof(st.d),&st.d);
    printf("st_c = char(%d)    %p\n",sizeof(st.c),&st.c);
    printf("st_d2 = double(%d) %p\n",sizeof(st.d2),&st.d2);

    struct nemory s;

    printf("st = %ld\n",sizeof(s));

    printf("st = %ld\n",sizeof(s));
    printf("st = memory(%d)   %p\n",sizeof(s),&s);
    printf("st_d = double(%d)  %p\n",sizeof(s.d),&s.d);
    printf("st_d2 = double(%d) %p\n",sizeof(s.d2),&s.d2);
    printf("st_i = int(%d)     %p\n",sizeof(s.i),&s.i);
    printf("st_c = char(%d)    %p\n",sizeof(s.c),&s.c);


}
