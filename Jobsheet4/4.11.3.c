#include <stdio.h>

void hkOhm()
{
    float v, r, i;
    printf("\nIsikan nilai tegangannya?");
    scanf("%f", &v);
    printf("Isikan nilai Resistensinya");
    scanf("%f", &r);
    i = v / r;
    printf("\n Arus = %5.f ampere dari tegangan= %5.1f volt dan resistensinya = %5.1f Ohm", i, v, r);
}
void konversiSuhu()
{
    float c, r, f;
    printf("CELCIUS     REAMUR      FAHRENHEIT");
    printf("\n=======================================");
    for (c = 0; c <= 100; c++)
    {
        r = c * 4 / 5;
        f = c * 9 / 5 + 32;
        printf("\n%8.2f%8.2f%8.2f", c, r, f);
    }
}
int main(void)
{
    int pilih;
    printf("MENU PILIHAN \n\n[1] Hukum Ohm\n[2] Konversi Suhu");
    printf("\n\nPilihan anda ?");
    scanf("%d", &pilih);

    switch (pilih)
    {
    case 1:
        hkOhm();
        break;

    case 2:
        konversiSuhu();
        break;
    default:
        printf("Anda salah pilih");
        break;
    }
}