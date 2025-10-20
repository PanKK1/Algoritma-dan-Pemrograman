#include <stdio.h>
#include <math.h>

int main()
{
    int pilihan;

    printf("\n--- DAFTAR MENU ---\n");
    printf("[1] Rumus Arus dan Daya Rangkaian Seri\n");
    printf("[2] Rumus Pembagi Tegangan (Vout)\n");
    printf("[3] Rumus GLBB (Gerak Lurus Berubah Beraturan)\n");
    printf("--------------------------------------------------\n");
    printf("Masukkan pilihan anda: ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {

    case 1:
    {
        float V = 10.0;
        float R1 = 50.0;
        float R2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        float I, P;
        int n = 10;

        printf("\n=== Perhitungan Arus dan Daya Rangkaian Seri ===\n");
        printf("=============================================\n");
        printf(" R2 (Ohm) | Arus (A)     | Daya pada R2 (W)\n");
        printf("=============================================\n");

        for (int i = 0; i < n; i++)
        {
            I = V / (R1 + R2[i]);
            P = I * I * R2[i];
            printf(" %8.2f | %12.4f | %16.4f\n", R2[i], I, P);
        }

        printf("=============================================\n");
        break;
    }

    case 2:
    {
        float Vin, R1v, R2v, Vout;

        printf("\n=== Program Pembagi Tegangan (Voltage Divider) ===\n");
        printf("Masukkan tegangan input (Vin) dalam Volt : ");
        scanf("%f", &Vin);
        printf("Masukkan nilai resistor R1 (Ohm) : ");
        scanf("%f", &R1v);
        printf("Masukkan nilai resistor R2 (Ohm) : ");
        scanf("%f", &R2v);

        Vout = Vin * (R2v / (R1v + R2v));

        printf("\nTegangan output (Vout) = %.2f Volt\n", Vout);
        break;
    }

    case 3:
    {
        float u, a, t, v, s;

        printf("\n=== Program Menghitung GLBB (Gerak Lurus Berubah Beraturan) ===\n");
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
        break;
    }

    default:
        printf("Pilihan tidak valid!\n");
        break;
    }

    return 0;
}
