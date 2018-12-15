# Struktur Dasar - C++

![screen](https://raw.githubusercontent.com/ajisubarkah/Pemrograman-Terstruktur/tree/master/src/sd-01.png)

Pada [program](https://github.com/ajisubarkah/Pemrograman-Terstruktur/tree/master/StrukturDasar/hello.cpp) diatas terdapat :

### Include
	
	#include <iostream>
	
Import header pada C++ diawali dengan `#include <nama_header>` untuk file header yang dibuat oleh user menggunakan `#include "nama_header"`. File header memiliki extensi ".h".

### Namespace
	
	using namspace std;
	
Namespace dirancang untuk mengatasi kesulitan dan digunakan sebagai informasi tambahan untuk membedakan fungsi, kelas, variabel, dll yang serupa dengan nama yang sama tersedia di header yang berbeda.

![screen](https://raw.githubusercontent.com/ajisubarkah/Pemrograman-Terstruktur/tree/master/src/sd-02.png)

Pada [program](https://github.com/ajisubarkah/Pemrograman-Terstruktur/tree/master/StrukturDasar/namespace.cpp) diatas merupakan penggunaan namespace tanpa di deklarasi terlebih dahulu. Sebelum menuliskan `cout` kita perlu mendeklarasi `std::cout` terlebih dahulu.

### Fungsi main()

	main()

Main pada program merupakan tempat eksekusi program dimulai.

### Semicolon dan Blocks

	main(){ //blok main
		cout << "Hello World!";
		return 0;
	} // end blok main
	
Pada program C++, titik koma ";" (Semicolon) adalah akhir dari pernyataan. Setiap pernyataan harus di akhiri oleh ";". Misalnya :
	
	a = 1;
	b = a + 1;
	hasil = a + b;
	
Sama saja dengan 
	
	a = 1; b = a + 1; hasil = a + b;
	
Blok adalah serangkaian pernyataan yang terhubung diawali oleh "{" dan diakhiri oleh "}".

### Whitespace

Sebuah baris yang hanya berisi spasi dikenal sebagai garis kosong, dan kompiler C++ akan mengabaikannya.

Whitespace memisahkan satu bagian dari pernyataan dari yang lain dan memungkinkan compiler untuk mengidentifikasi di mana satu elemen dalam pernyataan, seperti int, berakhir, dan elemen selanjutnya dimulai.

	int name;
	
Dalam pernyataan di atas harus ada whitespace (spasi) antara `int` dan `name` supaya compiler dapat membedakannya.

	name = firstName + lastName;
	
Pada pernyataan di atas, tidak membutuhkan whitespace antara `name` dan `=`, atau `=` dan `firstName`, meskipun dapat menyertakan whitespace untuk keterbacaan.