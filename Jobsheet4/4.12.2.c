#include <stdio.h>

int main()
{
    float V = 10.0;
    float R1 = 50.0;
    float R2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    float I, P;
    int n = 10;

    printf("=============================================\n");
    printf(" R2 (Ohm) | Arus (A)     | Daya pada R2 (W) \n");
    printf("=============================================\n");

    for (int i = 0; i < n; i++)
    {
        I = V / (R1 + R2[i]);
        P = I * I * R2[i];
        printf(" %8.2f | %12.4f | %16.4f\n", R2[i], I, P);
    }

    printf("=============================================\n");
    return 0;
}
