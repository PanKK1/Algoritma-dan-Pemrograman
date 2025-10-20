#include <stdio.h>

void garis1()
{
    printf("------------------\n");
}
void garis2()
{
    printf("\n==================\n");
}

void luasSegi3()
{
    float a, b, c;
    printf("Isikan Panjang sisi a ?");
    scanf("%f", &a);
    printf("Isikan Panjang sisi b ?");
    scanf("%f", &b);
    c = a * b;
    printf("Luas = %8.2f", c);
}
int main(void)
{
    garis1();
    luasSegi3();
    garis2();
}