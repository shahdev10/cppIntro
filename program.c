#include<stdio.h>

void f()
{
    int x;
    x += 8;
    printf("%d\n", x);
}
int main ()
{
    f();
    f();
    f();

}
