# Pemrograman Terstruktur - C++

Repository ini dibuat dengan tujuan pembelajaran terhadap bahasa C++

## Daftar Isi

- [Pemrograman Terstruktur - C++](#pemrograman-terstruktur---c)
  - [Daftar Isi](#daftar-isi)
  - [Pendahuluan](#pendahuluan)
  - [Struktur Dasar](#struktur-dasar)
  - [Input Output](#input-output)
  - [Tipe Data](#tipe-data)
  - [Operator](#operator)
  - [Percabangan](#percabangan)
  - [Perulangan](#perulangan)
  - [Array](#array)
  - [Fungsi](#fungsi)
  - [Header](#header)
  - [TODO](#todo)
  - [License](#license)

## Pendahuluan

C++ adalah salah satu bahasa pemrograman yang di buat oleh [Bjarne Stroustrup](https://en.wikipedia.org/wiki/Bjarne_Stroustrup). C++ telah mendukung konsep Pemrograman Berorientasi Objek (_Object Oriented Programming_) inilah yang membedakan C++ dengan bahasa C.

Mengkompilasi atau _compiling_ di C++ merupakan mengubah code menjadi bahasa komputer dimana komputer hanya mengerti intruksi 1 dan 0. Standarisasi C++ telah dikeluarkan mulai tahun 1998 hingga yang terbaru pada tanggal 12 Agustus 2011 yang diterbitkan sebagai C++11. Berikut compiler yang telah menggunakan C++11:

| IDE       | Platform | Command                                                            |
| --------- | -------- | ------------------------------------------------------------------ |
| **GCC**   | Linux    | `g++ -std=c++0x example.cpp -o example_program`                    |
| **Clang** | OS X     | `clang++ -std=c++11 -stdlib=libc++ example.cpp -o example_program` |

Untuk memudahkan pengguna mengkompilasi program C++ dengan menggunakan Integrated Development Environment (IDE). Berikut beberapa IDE yang mendukung bahasa C++:

| IDE                                                                | Platform              |
| ------------------------------------------------------------------ | --------------------- |
| [**Code::Blocks**](http://www.codeblocks.org)                      | Windows, Linux, macOS |
| [**Dev-C++**](https://sourceforge.net/projects/orwelldevcpp)       | Windows               |
| [**Visual Studio Code**](https://code.visualstudio.com)            | Windows, Linux, macOS |
| [**Visual Studio**](https://visualstudio.microsoft.com/vs/express) | Windows               |

## Struktur Dasar

Struktur adalah susunan, dasar adalah bagian paling bawah, dapat di simpulkan Struktur Dasar adalah yang paling mendasar dari C++.

[Pelajari lebih lanjut](StrukturDasar)

## Input Output

Proses input dan output merupakan hal yang penting agar kita dapat berinteraksi dengan program. Di dalam C++ terdapat beberapa fungsi untuk melakukan input dan output.

[Pelajari lebih lanjut](InputOutput)

## Tipe Data

Setiap tipe data digunakan untuk menampung konten yang berbeda. Tipe data yang menentukan jenis dari konten yang akan di isikan ke dalam variabel.

[Pelajari lebih lanjut](TipeData)

## Operator

Operator meliputi operasi aritmatika dasar seperti penambahan, pengurangan, perkalian, dan pembagian. Selain aritmatika dasar, terdapat juga operator-operator lainnya yaitu assignment, unary, equality and relational, dan condition.

[Pelajari lebih lanjut](Operator)

## Percabangan

Jalannya suatu program pasti akan bergantung pada kondisi yang dipilih. Untuk itu kita memerlukan percabangan yang berfungsi sebagai control flow statement atau statement yang dapat mengontrol alur jalan suatu kode berdasarkan kondisinya.

[Pelajari lebih lanjut](Percabangan)

## Perulangan

Perulangan adalah kode yang bisa kita gunakan untuk mengulang beberapa instruksi kode, seperti for, while, dan do-while.

[Pelajari lebih lanjut](Perulangan)

## Array

Array adalah kumpulan data yang dimasukkan ke dalam satu objek.

[Pelajari lebih lanjut](Array)

## Fungsi

Fungsi adalah kumpulan dari beberapa statement yang melakukan tugas tertentu dan dapat di panggil di dalam fungsi lainnya.

[Pelajari lebih lanjut](Fungsi)

## Header

Header adalah file yang berisi kumpulan fungsi dan variabel yang di gunakan ke dalam program C++.

[Pelajari lebih lanjut](Header)

## TODO

- [ ] [Array](Array)
- [ ] [Fungsi](Fungsi)
- [ ] [Header](Header)
- [X] [InputOutput](InputOutput)
- [ ] [Operator](Operator)
- [ ] [Percabangan](Percabangan)
- [ ] [Perulangan](Perulangan)
- [X] [StrukturDasar](StrukturDasar)
- [ ] [TipeData](TipeData)

## License

MIT
