#include <stdio.h>

int main()
{
    float Vin, R1, R2, Vout;

    printf("=== Program Pembagi Tegangan (Voltage Divider) ===\n");
    printf("Masukkan tegangan input (Vin) dalam Volt : ");
    scanf("%f", &Vin);
    printf("Masukkan nilai resistor R1 (Ohm) : ");
    scanf("%f", &R1);
    printf("Masukkan nilai resistor R2 (Ohm) : ");
    scanf("%f", &R2);

    Vout = Vin * (R2 / (R1 + R2));

    printf("\nTegangan output (Vout) = %.2f Volt\n", Vout);

    return 0;
}
