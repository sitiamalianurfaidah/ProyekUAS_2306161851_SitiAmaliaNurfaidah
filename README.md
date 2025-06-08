# Optimasi Waktu Pengisian Baterai Ponsel Menggunakan Metode Newton-Raphson

**Nama:** Siti Amalia Nurfaidah

**NPM:** 2306161851

## Deskripsi Program

Program ini menggunakan metode numerik **Newton-Raphson** untuk menghitung durasi optimal pengisian baterai ponsel hingga mencapai **tegangan target** tertentu. Model pengisian diasumsikan mengikuti fungsi eksponensial, yang merepresentasikan hubungan antara tegangan dan waktu dalam proses pengisian baterai, dengan mempertimbangkan efisiensi sistem dan sifat resistif dari rangkaian pengisian.

Jenis baterai yang dimodelkan dalam simulasi ini adalah **baterai lithium-ion (Li-ion)**, yang banyak digunakan pada perangkat ponsel. Dalam simulasi, pengguna menetapkan nilai tegangan maksimum (misalnya 4.2 V), tegangan target (misalnya 4.0 V), serta konstanta pengisian. Program menghitung waktu yang dibutuhkan agar baterai mencapai tegangan target tersebut.

Metode **Newton-Raphson** dipilih karena keakuratannya dalam menyelesaikan persamaan nonlinear, dengan memanfaatkan turunan dari fungsi yang dimodelkan. Program ini ditulis dalam bahasa C dan dijalankan melalui terminal. Parameter simulasi, termasuk tebakan awal dan toleransi error, ditentukan secara eksplisit dalam kode. Program akan menampilkan proses iterasi serta hasil akhir berupa durasi pengisian, tegangan tercapai, dan jumlah iterasi.

