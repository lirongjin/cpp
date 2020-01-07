#include <stdio.h>

//void func(int i);
//void func(int i, int j);

#define max(a, b)    ({typeof(a) v1 = a; typeof(b) v2 = b; \
                      (void)(&v1 == &v2);           \
                      v1 > v2 ? v1 : v2;})          
		      


int main()
{
//    typeof(int) a = 10;
    int b;
    typeof(b) a = 100;
//    printf("max 3, 4 is %d\n", max(53.0, 4));
    max(1, 2);
}
