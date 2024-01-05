#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int kullaniciSecim, bilgisayarSecim;

    printf("Tas-Kagit-Makas Oyunu\n");
    printf("1. Tas\n2. Kagit\n3. Makas\n");

    // Kullanýcýdan seçim al
    printf("Seciminizi yapin (1-3): ");
    scanf("%d", &kullaniciSecim);

    // Bilgisayarýn seçimini rastgele belirle
    srand(time(NULL));
    bilgisayarSecim = rand() % 3 + 1;

    // Kullanýcýnýn ve bilgisayarýn seçimini ekrana yazdýr
    printf("Kullanicinin Secimi: %d\n", kullaniciSecim);
    printf("Bilgisayarin Secimi: %d\n", bilgisayarSecim);

    // Kazananý belirle ve ekrana yazdýr
    if (kullaniciSecim == bilgisayarSecim) {
        printf("Berabere!\n");
    } else if ((kullaniciSecim == 1 && bilgisayarSecim == 3) ||
               (kullaniciSecim == 2 && bilgisayarSecim == 1) ||
               (kullaniciSecim == 3 && bilgisayarSecim == 2)) {
        printf("Kazandiniz!\n");
    } else {
        printf("Kaybettiniz!\n");
    }

    return 0;
}

