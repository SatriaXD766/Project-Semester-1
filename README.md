# Project Semester 1 - Konversi Sistem Bilangan

[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=22&pause=1000&color=00F7FF&center=true&vCenter=true&width=600&lines=Halo+%F0%9F%91%8B+Selamat+Datang...;Ini+adalah+Repo+Pertama+Saya+di+GitHub!;Satria+Bagas+S.+-+552012610009)](https://git.io/typing-svg)

## Identitas
- **Nama:** Satria Bagas Sejati
- **NIM:** 552012610009
- **Program Studi:** Teknik Informatika - Semester 1

## Deskripsi Project
Project ini merupakan project pribadi yang saya kembangkan selama semester 1 untuk memperdalam pemahaman mengenai sistem bilangan dan implementasinya dalam bahasa pemrograman C++.

Project ini berfokus pada implementasi konversi bilangan antar basis (Desimal, Biner, Oktal, Heksadesimal) dengan menggunakan **Metode Horner**. Metode Horner dipilih karena memiliki efisiensi perhitungan yang baik dengan formula `hasil = hasil * basis + nilai_digit` yang dieksekusi secara berurutan dari kiri ke kanan.

### ✨ Harapan Saat Pertama Kali Upload Project di GitHub
Sebagai mahasiswa baru Semester 1, ini adalah langkah pertama saya untuk:
1.  **Belajar Open Source:** Mulai memahami cara kerja version control (Git) dan kolaborasi di GitHub.
2.  **Membangun Portofolio Digital:** Menjadikan GitHub sebagai tempat dokumentasi perjalanan belajar coding saya dari nol.
3.  **Mendapatkan Feedback:** Berharap bisa mendapatkan masukan dari teman dan dosen untuk kode yang lebih baik.
4.  **Konsistensi:** Berkomitmen untuk terus upload setiap project kecil yang saya buat selama kuliah, tidak hanya tugas besar.
5.  **Motivasi Belajar:** Dengan kode yang dipublikasi, saya jadi lebih termotivasi untuk menulis kode yang rapi dan terstruktur.

> "Ini bukan sekedar tugas, tapi jejak pertama saya di dunia developer."

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

## 🚀 Langkah-Langkah Upload Project Pertama ke GitHub
Berikut adalah langkah yang saya lakukan saat pertama kali upload project ini:

- **Tahap 1: Persiapan Akun**
    - Membuat akun di github.com
    - Install Git di laptop

- **Tahap 2: Membuat Repository Baru**
    - Klik `+` di kanan atas > `New repository`
    - Isi nama repo `Project-Semester-1`
    - Pilih `Public` dan centang `Add a README file`

- **Tahap 3: Menyiapkan File Lokal**
    - Menyiapkan file `konversi_lengkap.cpp` yang sudah tested dan berhasil di-compile

- **Tahap 4: Upload File**
    - Klik `Add file` > `Upload files`
    - Drag and drop file `.cpp` ke GitHub
    - Tulis commit message: `Initial commit - Program Konversi Sistem Bilangan`

- **Tahap 5: Menulis README.md**
    - Edit README.md untuk menambahkan identitas, deskripsi, dan cara menjalankan program
    - Menggunakan Markdown agar tampilan rapi

- **Tahap 6: Commit & Publish**
    - Klik `Commit changes` untuk menyimpan semua perubahan
    - Repo siap dibagikan sebagai portofolio!

## Cara Menjalankan Program
Pastikan sudah terinstall compiler G++.

**Pada Linux / macOS:**
```bash
g++ konversi_lengkap.cpp -o konversi
./konversi
