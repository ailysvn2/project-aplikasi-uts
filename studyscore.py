print("=== StudyScore ===")
print("Aplikasi Penghitung Nilai Akhir\n")

nama = input("Masukkan nama: ")

tugas1 = float(input("Nilai Tugas 1: "))
tugas2 = float(input("Nilai Tugas 2: "))
tugas3 = float(input("Nilai Tugas 3: "))
tugas4 = float(input("Nilai Tugas 4: "))

uts = float(input("Nilai UTS: "))
uas = float(input("Nilai UAS: "))

target = float(input("Masukkan target nilai akhir: "))
rataTugas = (tugas1 + tugas2 + tugas3 + tugas4) / 4
nilaiAkhir = (rataTugas * 40 / 100) + (uts * 30 / 100) + (uas * 30 / 100)
selisih = nilaiAkhir - target

print("\n=== HASIL STUDYSCORE ===")
print("Nama:", nama)
print("Rata-rata tugas:", rataTugas)
print("Nilai akhir:", nilaiAkhir)
print("Target nilai:", target)
print("Selisih:", selisih)

if nilaiAkhir >= target:
    print("Selamat target tercapai!")
else:
    print("Maaf target belum tercapai.")