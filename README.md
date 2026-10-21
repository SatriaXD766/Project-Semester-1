# Project Semester 1 - Konversi Sistem Bilangan

## Identitas
- **Nama:** Satria Bagas Sejati
- **NIM:** 552012610009
- **Program Studi:** Teknik Informatika - Semester 1

## Deskripsi Project
Project ini merupakan project pribadi yang saya kembangkan selama semester 1 untuk memperdalam pemahaman mengenai sistem bilangan dan implementasinya dalam bahasa pemrograman C++.

Project ini berfokus pada implementasi konversi bilangan antar basis (Desimal, Biner, Oktal, Heksadesimal) dengan menggunakan Metode Horner. Metode Horner dipilih karena memiliki efisiensi perhitungan yang baik dengan formula `hasil = hasil * basis + nilai_digit` yang dieksekusi secara berurutan dari kiri ke kanan.

## Fitur Utama
File utama pada project ini adalah `konversi_lengkap.cpp` yang memiliki fitur sebagai berikut:
1.  Konversi dari Desimal ke Biner, Oktal, dan Heksadesimal.
2.  Konversi dari Biner, Oktal, dan Heksadesimal ke Desimal menggunakan Metode Horner.
3.  Konversi antar basis non-desimal (Heksadesimal ke Oktal, Oktal ke Heksadesimal, Biner ke Oktal, Biner ke Heksadesimal).

## Alur Pengembangan
1.  Mempelajari dan menganalisis konsep Metode Horner untuk konversi bilangan.
2.  Merancang alur program dan struktur fungsi.
3.  Mengimplementasikan fungsi `charToValue` untuk mengonversi karakter 'A'-'F' menjadi nilai numerik 10-15.
4.  Mengimplementasikan fungsi utama `toDecimal` sebagai inti dari Metode Horner.
5.  Mengimplementasikan fungsi `decimalToBinary`, `decimalToOctal`, dan `decimalToHexadecimal` menggunakan metode pembagian bersisa.
6.  Untuk konversi silang (contoh: Heksadesimal ke Oktal), sistem akan melakukan konversi ke Desimal terlebih dahulu sebagai basis perantara.
7.  Melakukan pengujian program dengan berbagai studi kasus dan melakukan penanganan untuk input huruf kecil maupun huruf besar.
8.  Melakukan dokumentasi dan publikasi kode sumber pada repository GitHub ini sebagai bagian dari portofolio.

## Cara Menjalankan Program
Pastikan sudah terinstall compiler G++.

**Pada Linux / macOS:**
```bash
g++ konversi_lengkap.cpp -o konversi
./konversi