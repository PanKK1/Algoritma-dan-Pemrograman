#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu()
{
    printf("\n-----------------------\n");
    printf("      KALKULATOR SAYA    \n");
    printf("==========================\n");
    printf("Fungsi Kalkulator\n\n");
    printf(" +   : Penjumlahan\n");
    printf(" -   : Pengurangan\n");
    printf(" *   : Perkalian\n");
    printf(" /   : Pembagian\n");
    printf(" ^   : Pangkat (angka1 ^ angka2)\n");
    printf(" s   : Akar Kuadrat (squareroot)\n");
    printf(" q   : Keluar (Quit)\n");
}
int main(void)
{
    char tombol;
    float angka1, angka2, hasil;

    menu();

    printf("\n\nFungsi Kalkulator yang dipilih (+, -, *, /, ^, s, dan q) ? ");
    scanf("%c", &tombol);
    if (tombol == 'q')
        exit(0);

    printf("Masukan angka pertama ? ");
    scanf("%f", &angka1);
    printf("Masukan angka kedua ? ");
    scanf("%f", &angka2);

    switch (tombol)
    {
    case '+':
        hasil = angka1 + angka2;
        printf("Hasil dari %2.f %c%2.f = %2.f", angka1, tombol, angka2, hasil);
        break;
    case '-':
        hasil = angka1 - angka2;
        printf("Hasil dari %2.f %c%2.f = %2.f", angka1, tombol, angka2, hasil);
        break;
    case '*':
        hasil = angka1 * angka2;
        printf("Hasil dari %2.f %c%2.f = %2.f", angka1, tombol, angka2, hasil);
        break;
    case '/':
        hasil = angka1 / angka2;
        printf("Hasil dari %2.f %c%2.f = %2.f", angka1, tombol, angka2, hasil);
        break;
    case '^':
        hasil = pow(angka1, angka2);
        printf("Hasil dari %.0f pangkat %.0f = %.0f", angka1, angka2, hasil);
        break;
    case 's':
        hasil = sqrt(angka1);
        printf("Hasil dari akar %.2f = %.2f", angka1, hasil);
        break;
    case 'q':
        printf("Quit dari program");
        exit(0);
        break;
    default:
        printf("Pilihan tombol anda tidak valid");
        break;
    }
    printf("\n\n\n");
}
