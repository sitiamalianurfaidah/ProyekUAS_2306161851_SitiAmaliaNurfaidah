# __Optimasi Waktu Pengisian Baterai Ponsel Menggunakan Metode Newton-Raphson__

**Nama:** Siti Amalia Nurfaidah

**NPM:** 2306161851

## __Deskripsi Program__

Program ini menggunakan metode numerik **Newton-Raphson** untuk menghitung durasi optimal pengisian baterai ponsel hingga mencapai **tegangan target** tertentu. Model pengisian diasumsikan mengikuti fungsi eksponensial, yang merepresentasikan hubungan antara tegangan dan waktu dalam proses pengisian baterai, dengan mempertimbangkan efisiensi sistem dan sifat resistif dari rangkaian pengisian.

Jenis baterai yang dimodelkan dalam simulasi ini adalah **baterai lithium-ion (Li-ion)**, yang banyak digunakan pada perangkat ponsel. Dalam simulasi, pengguna menetapkan nilai tegangan maksimum (misalnya 4.2 V), tegangan target (misalnya 4.0 V), serta konstanta pengisian. Program menghitung waktu yang dibutuhkan agar baterai mencapai tegangan target tersebut.

Metode **Newton-Raphson** dipilih karena keakuratannya dalam menyelesaikan persamaan nonlinear, dengan memanfaatkan turunan dari fungsi yang dimodelkan. Program ini ditulis dalam bahasa C dan dijalankan melalui terminal. Parameter simulasi, termasuk tebakan awal dan toleransi error, ditentukan secara eksplisit dalam kode. Program akan menampilkan proses iterasi serta hasil akhir berupa durasi pengisian, tegangan tercapai, dan jumlah iterasi.

## __Struktur File__

* `Optimasi-Waktu-Baterai.c` – File utama program yang mengandung logika Newton-Raphson.
* `README.md` – Dokumentasi program.

## __Cara Menjalankan Program__

1. **Kompilasi Program**
   Jalankan perintah berikut di terminal:

   ```bash
   gcc Optimasi-Waktu-Baterai.c -o baterai
   ```

2. **Eksekusi Program**
   Jalankan file hasil kompilasi:

   ```bash
   ./baterai
   ```

3. **Hasil akan muncul di terminal** dalam format tabel iterasi dan hasil akhir.

## __Hasil Output__

```avrasm
=== HASIL SIMULASI PENGISIAN BATERAI (Newton-Raphson) ===
Parameter:
- V_maksimum       : 4.2 V
- V_target         : 4.0 V
- Konstanta        : 0.03 s⁻¹
- Tebakan awal     : 30.0 s
- Toleransi error  : 1e-5

Proses Iterasi:
Iterasi     t (detik)         Selisih Tegangan (V)
1           59.429207         -0.506246
2           83.322975         -0.144864
3           97.325043         -0.026578
4           101.235100        -0.001500
5           101.483185        -0.000005

=== HASIL AKHIR ===
Waktu pengisian     : 101.483185 detik
Tegangan tercapai   : 3.999995 V
Jumlah iterasi      : 5
```