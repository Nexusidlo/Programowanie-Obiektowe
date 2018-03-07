#include <stdio.h>
#include <stdlib.h>
struct trojkat {
    int a;
    int b;
    int c;
};

int obwod (struct trojkat T){
    return T.a+T.b+T.c;
}

void fun722(struct trojkat T1, struct trojkat *T2){
// T2 = &T1;
 T2->a=T1.a;
 T2->b=T1.b;
 T2->c=T1.c;
}

int main()
{
    struct trojkat *T2 = (struct trojkat *) (malloc(sizeof(struct trojkat)));
    struct trojkat T1;
    T1.a=5;
    T1.b=5;
    T1.c=5;
    int obw = obwod(T1);
    printf("Obw= %d\n",obw);

    fun722(T1,T2);
    printf("T2= %d %d %d\n", T2->a, T2->b, T2->c);

free(T2);
    return 0;
}
