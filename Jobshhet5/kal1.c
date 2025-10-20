#include <stdio.h>

int main()
{
    char tombol;
    float angka1, angka2, hasil;

    printf("Fungsi kalkulator yang dipilih (+, -, *, /) ? ");
    scanf("%c", &tombol);

    printf("Masukan angka pertama ?");
    scanf("%f", &angka1);
    printf("Masukan angka kedua ?");
    scanf("%f", &angka2);

    switch (tombol)
    {
    case '+':
        hasil = angka1 + angka2;
        break;
    case '-':
        hasil = angka1 - angka2;
        break;
    case '*':
        hasil = angka1 * angka2;
        break;
    case '/':
        hasil = angka1 / angka2;
        break;

    default:
        printf("Error Salah Tombol");
        break;
    }
    printf("Hasil dari %2.f %c%2.f = %2.f", angka1, tombol, angka2, hasil);
}