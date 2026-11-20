while True:
    print("=============================")
    print("  PROGRAM HITUNG LISTRIK")
    print("=============================")
    print("1. Hitung Tagihan")
    print("2. Hitung Konsumsi")
    print("3. Riwayat")
    print("4. Hitung Biaya")
    print("5. Hitung Daya")
    print("6. Hitung Tegangan")
    print("7. Hitung Arus")
    print("8. Keluar")

    penghitungan = int(input("Pilih menu [1-8]: "))

    if penghitungan == 1:
        print("\n--- Hitung Tagihan ---")
        daya = float(input("Masukkan Daya (Watt): "))
        jam = float(input("Masukkan Lama (jam): "))
        tarif = float(input("Masukkan Tarif: "))

        # rumus
        kwh = (daya * jam) / 1000
        tagihan = kwh * tarif
        total = tagihan + 5000  # Rp.5.000,00 biaya admin

        print("kWh :", kwh)
        print("Tagihan dasar : Rp", tagihan)
        print("Total + admin : Rp", total)

        # cek genap ganjil
        kwh_bulat = int(kwh)
        if kwh_bulat % 2 == 0:
            print("Info: kWh nya GENAP")
        else:
            print("Info: kWh nya GANJIL")
        print("")

    elif penghitungan == 2:
        print("\n--- Hitung Konsumsi ---")
        daya = float(input("Masukkan Daya (Watt): "))
        jam = float(input("Masukkan Lama (jam): "))
        
        kwh = (daya * jam) / 1000
        print("Konsumsi :", kwh, "kWh")

        # hitung hari
        hari = int(jam / 24) # pakai / biasa biar gampang
        sisa = jam % 24

        if hari > 0:
            print("Itu sama dengan", hari, "hari", sisa, "jam")
        else:
            print("Kurang dari 1 hari")
        print("")

    elif penghitungan == 3:
        print("\n--- Riwayat ---")
        print("Maaf fitur belum jadi\n")

    elif penghitungan == 4:
        print("\n--- Hitung Biaya ---")
        konsumsi = float(input("Masukkan Konsumsi (kWh): "))
        tarif = float(input("Masukkan Tarif: "))
        diskon = float(input("Masukkan Diskon: "))

        biaya = konsumsi * tarif
        total_biaya = biaya - diskon

        print("Biaya awal : Rp", biaya)
        print("Total setelah diskon : Rp", total_biaya)
        print("")

    elif penghitungan == 5:
        print("\n--- Hitung Daya ---")
        tegangan = float(input("Masukkan Tegangan (V): "))
        arus = float(input("Masukkan Arus (A): "))
        daya = tegangan * arus
        print("Daya :", daya, "Watt\n")

    elif penghitungan == 6:
        print("\n--- Hitung Tegangan ---")
        daya = float(input("Masukkan Daya (Watt): "))
        arus = float(input("Masukkan Arus (A): "))
        
        if arus == 0:
            print("Error, arus tidak boleh 0\n")
        else:
            tegangan = daya / arus
            print("Tegangan :", tegangan, "Volt\n")

    elif penghitungan == 7:
        print("\n--- Hitung Arus ---")
        daya = float(input("Masukkan Daya (Watt): "))
        tegangan = float(input("Masukkan Tegangan (V): "))

        if tegangan == 0:
            print("Error, tegangan tidak boleh 0\n")
        else:
            arus = daya / tegangan
            print("Arus :", arus, "Ampere\n")

    elif penghitungan == 8:
        print("Terima kasih, program selesai")
        break

    else:
        print("Salah pilih, coba lagi dari 1-8\n")