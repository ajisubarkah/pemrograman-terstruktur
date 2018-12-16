# Struktur Dasar - C++

Berikut merupakan isi dari [`hello.cpp`](hello.cpp):

```cpp
#include <iostream>

using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

Pada program diatas, terdapat:

## Include

```cpp
#include <iostream>
```

Import header pada C++ diawali dengan `#include <nama_header>` untuk file header yang dibuat oleh user menggunakan `#include "nama_header.h"`. File header memiliki extensi `.h`.

## Namespace

```cpp
using namespace std;
```

Namespace dirancang untuk mengatasi kesulitan dan digunakan sebagai informasi tambahan untuk membedakan fungsi, kelas, variabel, dll yang serupa dengan nama yang sama tersedia di header yang berbeda.

Berikut merupakan isi dari [`namespace.cpp`](namespace.cpp):

```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```

Pada program diatas merupakan penggunaan namespace tanpa di deklarasi terlebih dahulu. Sebelum menuliskan `cout` kita perlu mendeklarasi `std::cout` terlebih dahulu.

## Fungsi `int main()`

```cpp
int main() {
  // TODO: program execute
}
```

Main pada program merupakan tempat eksekusi program dimulai.

## Semicolon dan Blocks

```cpp
int main() {               // begin blok main
  cout << "Hello World!";
  return 0;
}                          // end blok main
```

Pada program C++, titik koma atau _semicolon_ (`;`) adalah akhir dari pernyataan. Setiap pernyataan harus di akhiri oleh `;`. Misalnya :

```cpp
a = 1;
b = a + 1;
hasil = a + b;
```

Sama saja dengan:

```cpp
a = 1; b = a + 1; hasil = a + b;
```

Blok adalah serangkaian pernyataan yang terhubung diawali oleh `{` dan diakhiri oleh `}`.

## _Whitespace_

Sebuah baris yang hanya berisi spasi dikenal sebagai garis kosong, dan kompiler C++ akan mengabaikannya.

Whitespace memisahkan satu bagian dari pernyataan dari yang lain dan memungkinkan compiler untuk mengidentifikasi di mana satu elemen dalam pernyataan, seperti int, berakhir, dan elemen selanjutnya dimulai.

```cpp
int angka;
```

Dalam pernyataan di atas harus ada whitespace (spasi) antara `int` dan `angka` supaya compiler dapat membedakannya.

```cpp
name = firstName + lastName;
```

Pada pernyataan di atas, tidak membutuhkan whitespace antara `name` dan `=`, atau `=` dan `firstName`, meskipun dapat menyertakan whitespace untuk readability.
