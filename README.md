# Project Semester 1 - Konversi Sistem Bilangan

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=0,2,2,5,30&height=200&section=header&text=Project%20Semester%201&fontSize=45&fontColor=fff&animation=twinkling&fontAlignY=35&desc=Konversi%20Sistem%20Bilangan%20|%20C%2B%2B%20%7C%20Metode%20Horner&descAlignY=55&descSize=18" />

<div align="center">

[![Typing SVG](https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=700&size=24&duration=3000&pause=500&color=00D9FF&background=00000000&center=true&vCenter=true&multiline=true&width=700&height=80&lines=Yo+Wassup+%F0%9F%91%8B+Welcome+to+My+Repo!;Satria+Bagas+S.+-+552012610009+%F0%9F%9A%80;This+is+My+First+Step+as+a+Dev!)](https://git.io/typing-svg)

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![GitHub](https://img.shields.io/badge/My%20First%20Repo-000000?style=for-the-badge&logo=github&logoColor=white)
![Semester](https://img.shields.io/badge/Semester%201-00D9FF?style=for-the-badge&logo=codeforces&logoColor=white)
![Status](https://img.shields.io/badge/Status-DONE-success?style=for-the-badge)

</div>

---

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

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=0,2,2,5,30&height=120&section=footer&text=Keep%20Coding%20%26%20Keep%20Growing!&fontSize=22&fontColor=fff&animation=twinkling&fontAlignY=75" />
