print("===== MENU RESTORAN =====")
print("1. Nasi Goreng (Rp 15000)")
print("2. Mie Ayam    (Rp 12000)")
print("3. Es Teh      (Rp 3000)")

while True:
    pilihan = int(input("Pilih menu (1-3): "))
    jumlah = int(input("Masukkan jumlah: "))

    if pilihan == 1:
        harga = 15000
    elif pilihan == 2:
        harga = 12000
    elif pilihan == 3:
        harga = 3000
    else:
        print("Menu tidak ada")
        exit()

    total = harga * jumlah
    print(f"Total bayar: Rp {total}")
