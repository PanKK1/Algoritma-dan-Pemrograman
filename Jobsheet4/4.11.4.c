#include <stdio.h>

void mieAyam()
{
    printf("Mie ayam adalah salah satu makanan khas Indonesia yang terdiri dari mie kuning yang direbus,\n"
           "kemudian disajikan dengan potongan daging ayam yang telah dimasak menggunakan bumbu khas seperti kecap manis,\n"
           "bawang putih, dan minyak ayam. Hidangan ini biasanya dilengkapi dengan sayuran seperti sawi hijau, daun bawang,\n"
           "serta pelengkap seperti pangsit goreng atau pangsit rebus. Mie ayam disajikan dengan kuah kaldu ayam yang gurih,\n"
           "sehingga memberikan cita rasa yang kaya dan lezat.\n");
}

void bakso()
{
    printf("Bakso adalah makanan yang terbuat dari campuran daging sapi giling dan tepung tapioka yang dibentuk menjadi bola-bola kecil,\n"
           "lalu direbus hingga matang. Bakso umumnya disajikan dengan kuah kaldu sapi yang gurih dan hangat, serta dilengkapi dengan mie,\n"
           "bihun, tahu, tauge, dan kadang pangsit. Cita rasa bakso yang kenyal dan gurih menjadikannya salah satu makanan favorit\n"
           "masyarakat Indonesia dari berbagai kalangan.\n");
}

int main(void)
{
    int pilih;
    printf("MENU PILIHAN\n\n[1] Apa itu Mie Ayam\n[2] Apa itu Bakso");
    printf("\n\nPilihan anda? ");
    scanf("%d", &pilih);

    switch (pilih)
    {
    case 1:
        mieAyam();
        break;
    case 2:
        bakso();
        break;
    default:
        printf("Anda salah pilih\n");
        break;
    }

    return 0;
}
