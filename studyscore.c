#include <stdio.h>

int main() {
    char nama[50];
    float tugas1, tugas2, tugas3, tugas4;
    float uts, uas, target;
    float rataTugas, nilaiAkhir, selisih;

    printf("=== StudyScore ===\n");
    printf("Aplikasi Penghitung Nilai Akhir\n\n");

    printf("Masukkan nama: ");
    scanf(" %[^\n]", nama);

    printf("Nilai Tugas 1: ");
    scanf("%f", &tugas1);

    printf("Nilai Tugas 2: ");
    scanf("%f", &tugas2);

    printf("Nilai Tugas 3: ");
    scanf("%f", &tugas3);

    printf("Nilai Tugas 4: ");
    scanf("%f", &tugas4);

    printf("Nilai UTS: ");
    scanf("%f", &uts);

    printf("Nilai UAS: ");
    scanf("%f", &uas);

    printf("Masukkan target nilai akhir: ");
    scanf("%f", &target);

    rataTugas = (tugas1 + tugas2 + tugas3 + tugas4) / 4;

    nilaiAkhir = (rataTugas * 40 / 100)
               + (uts * 30 / 100)
               + (uas * 30 / 100);

    selisih = nilaiAkhir - target;

    printf("\n=== HASIL STUDYSCORE ===\n");
    printf("Nama: %s\n", nama);
    printf("Rata-rata tugas: %.2f\n", rataTugas);
    printf("Nilai akhir: %.2f\n", nilaiAkhir);
    printf("Target nilai: %.2f\n", target);
    printf("Selisih: %.2f\n", selisih);

    if (nilaiAkhir >= target) {
        printf("Selamat target tercapai!\n");
    } else {
        printf("Maaf target belum tercapai.\n");
    }

    return 0;
}