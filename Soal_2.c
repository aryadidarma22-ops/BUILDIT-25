#include <stdio.h>


int main() {
    int angka, hasil, i = 0;

    printf("Masukan angka untuk tabel perkalian: ");
    scanf("%d", &angka);

    printf("Tabel Perkalian $d;/ angka");
    while (i <= 10) {
        hasil = angka * i;
        printf("%d x %d = %d\n", angka, i, hasil);
        i++;
    }

    return 0;
}