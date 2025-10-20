#include <stdio.h>

int main()
{
    float u, a, t, v, s;

    printf("=== Program Menghitung GLBB (Gerak Lurus Berubah Beraturan) ===\n");
    printf("Masukkan kecepatan awal (u) dalam m/s : ");
    scanf("%f", &u);
    printf("Masukkan percepatan (a) dalam m/s^2 : ");
    scanf("%f", &a);
    printf("Masukkan waktu (t) dalam detik : ");
    scanf("%f", &t);

    v = u + a * t;
    s = u * t + 0.5 * a * t * t;

    printf("\nHasil Perhitungan:\n");
    printf("Kecepatan akhir (v) = %.2f m/s\n", v);
    printf("Jarak tempuh (s) = %.2f meter\n", s);

    return 0;
}
