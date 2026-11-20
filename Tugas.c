#include <stdio.h>

int main() {
    int pilihan;
    float daya, jam, tarif, kwh, tagihan;
    float tegangan, arus;
    float konsumsi, biaya;

    while(1) {
        printf("\n");
        printf("============================\n");
        printf("  PROGRAM HITUNG LISTRIK\n");
        printf("============================\n");
        printf("1. Hitung Tagihan\n");
        printf("2. Hitung Konsumsi kWh\n");
        printf("3. Hitung Biaya\n");
        printf("4. Hitung Daya (Watt)\n");
        printf("5. Hitung Tegangan (Volt)\n");
        printf("6. Hitung Arus (Ampere)\n");
        printf("7. Riwayat\n");
        printf("8. Keluar\n");
        printf("Pilih menu [1-8]: ");
        scanf("%d", &pilihan);

        if(pilihan == 1) {
            printf("\n--- Hitung Tagihan ---\n");
            printf("Masukan Daya (Watt): ");
            scanf("%f", &daya);
            printf("Masukan Jam Pakai: ");
            scanf("%f", &jam);
            printf("Masukan Tarif per kWh: ");
            scanf("%f", &tarif);

            kwh = (daya * jam) / 1000;
            tagihan = kwh * tarif;
            printf("Hasil Tagihan = Rp %.2f\n", tagihan);

        } else if(pilihan == 2) {
            printf("\n--- Hitung Konsumsi ---\n");
            printf("Masukan Daya (Watt): ");
            scanf("%f", &daya);
            printf("Masukan Jam Pakai: ");
            scanf("%f", &jam);

            kwh = (daya * jam) / 1000;
            printf("Konsumsi = %.2f kWh\n", kwh);

        } else if(pilihan == 3) {
            printf("\n--- Hitung Biaya ---\n");
            printf("Masukan Konsumsi (kWh): ");
            scanf("%f", &konsumsi);
            printf("Masukan Tarif: ");
            scanf("%f", &tarif);

            biaya = konsumsi * tarif;
            printf("Biaya = Rp %.2f\n", biaya);

        } else if(pilihan == 4) {
            printf("\n--- Hitung Daya ---\n");
            printf("Masukan Tegangan (V): ");
            scanf("%f", &tegangan);
            printf("Masukan Arus (A): ");
            scanf("%f", &arus);

            daya = tegangan * arus;
            printf("Daya = %.2f Watt\n", daya);

        } else if(pilihan == 5) {
            printf("\n--- Hitung Tegangan ---\n");
            printf("Masukan Daya (Watt): ");
            scanf("%f", &daya);
            printf("Masukan Arus (A): ");
            scanf("%f", &arus);

            if(arus == 0) {
                printf("Arus tidak boleh 0!\n");
            } else {
                tegangan = daya / arus;
                printf("Tegangan = %.2f Volt\n", tegangan);
            }

        } else if(pilihan == 6) {
            printf("\n--- Hitung Arus ---\n");
            printf("Masukan Daya (Watt): ");
            scanf("%f", &daya);
            printf("Masukan Tegangan (V): ");
            scanf("%f", &tegangan);

            if(tegangan == 0) {
                printf("Tegangan tidak boleh 0!\n");
            } else {
                arus = daya / tegangan;
                printf("Arus = %.2f Ampere\n", arus);
            }

        } else if(pilihan == 7) {
            printf("\n--- Riwayat ---\n");
            printf("Maaf fitur riwayat belum jadi\n");

        } else if(pilihan == 8) {
            printf("Terima kasih sudah pakai program ini\n");
            break;

        } else if (pilihan < 1 || pilihan > 8) {
            printf("Pilihan salah! Pilih 1-8 aja\n");

        } else {
            printf("");
        }
    }

    return 0;
}