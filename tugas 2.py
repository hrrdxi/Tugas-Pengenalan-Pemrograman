nama_barang = input("Masukkan Nama Barang: ")
harga = int(input("Masukkan Harga Barang: "))
jumlah = int(input("Masukkan Jumlah Barang: "))

total = harga * jumlah
diskon = 10/100

subtotal = total - (total * diskon)

print("\n")
print("=== Struk Belanja ===")
print("Nama Barang:", nama_barang)
print("Total: Rp", int(total))
print("Diskon: 10%")
print("Subtotal: Rp", int(subtotal))