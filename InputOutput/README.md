# Input Output - C++

Pada pemrograman C++ ini terdiri dari 3 komponen dasar utama yaitu **input**, **proses** dan **output**.

## Apa itu Input, Proses dan Output

- **Input**: pemberian nilai terhadap variabel
- **Proses**: serangkain langkah yang dilakukan untuk mengelola input yang diberikan
- **Output**: menampilkan hasil dari data yang telah di olah

Pada C++ memiliki basic input output yang terdapat di dalam library `iostream` yaitu:

| Stream | Description                      |
| ------ | -------------------------------- |
| `cin`  | standard input stream            |
| `cout` | standard output stream           |
| `cerr` | standard error (output) stream   |
| `clog` | standard logging (output) stream |

Selain basic input output diatas masih ada beberapa lagi penggunaan input output didalam file header lainnya.

## `cout` dan `cin`

Penggunaan `cout` dan `cin` menggunakan library `iostream`.

Contoh [program (`cout_cin.cpp`)](cout_cin.cpp)

## *Output* cout

Format dalam penulisan `cout` menggunakan *insertion operator* yang ditulis dengan `<<`.

```cpp
cout << "Hello I'm Mr. Plankton";  // menampilkan sentence di layar
cout << 100;                       // menampilkan angka 100 di layar
cout << x;                         // menampilkan value dari variabel x di layar
```

Untuk menampilkan string literal, pernyataan harus diapit oleh double quote (`"`). Sedangkan untuk menampilkan isi variabel dan angka tidak membutuhkan double quote.

*Insertion operator* `<<` dapat dirangkai dalam satu pernyataan misalnya :

```cpp
cout << "I live in " << country << ", and my age is " << age;
```

Untuk melakukan _line break_ (baris baru) dapat menyisipkan `\n` atau menggunakan `endl`.

```cpp
cout << "First sentence. \nSecond Sentence." << endl;
cout << "Third sentence." << endl;
```

## Input `cin`

Format dalam penulisan `cin` menggunakan *extraction  operator* yang ditulis dengan `>>`.

```cpp
int x;
cin >> x;
```

Walaupun penggunaan `cin` sederhana, akan tetapi memiliki kelemahan yang besar. Contoh diatas apabila tidak di inputkan sebagai bilangan bulat (integer), maka operasi pemberian nilai terhadap variabel akan gagal.

*Extraction  operator* (`>>`) juga dapat dirangkai untuk meminta lebih dari satu data dalam satu pernyataan misalnya :

```cpp
cin >> a >> b;
```

Sama saja dengan:

```cpp
cin >> a;
cin >> b;
```

## `printf` dan `scanf`

Penggunaan `printf` dan `scanf` menggunakan library `stdio.h`. Format dalam penulisan `printf` dan `scanf` menggunakan *format specifiers* yang di awali dengan `%` dan diikuti *specifier character* sebagai berikut :

| Specifier    | Description          |
| ------------ | -------------------- |
| `d` atau `i` | integer              |
| `u`          | decimal integer      |
| `f`          | float                |
| `lf`         | long float           |
| `ld`         | long double          |
| `c`          | character            |
| `s`          | string of characters |
| `p`          | pointer address      |

Contoh [program (`printf_scanf.cpp`)](printf_scanf.cpp)

## Output `printf`

Format `printf` menggunakan *specifier character* yang di letakkan di dalam string literal dan diikuti `,` kemudian nilai yang akan di letakkan di *specifier character*.

```cpp
printf("Hello I'm Mr. Plankton");
printf("My age is %d years old", 20);
printf("First character is %c and second character is %c", 'M', 114);
```

Pada saat `printf` berhasil menampilkan, maka dapat memiliki return value berupa total karakter yang ditampilkan. Apabila error maka akan memiliki nilai negative.

```cpp
int totalCharacter = printf("Hello I'm Mr. Plankton");
```

Maka nilai dari `totalCharacter` adalah `22`.

## Input `scanf`

Format `scanf` menggunakan *specifier character* yang di letakkan di dalam string literal dan diikuti `,` kemudian menggunakan `&` diikuti variabel yang akan di beri value.

```cpp
scanf("%d", &x);
scanf("%s", str);
```

Input `scanf` juga memiliki return value jika inputan berhasil dilakukan yaitu bernilai 1 dan apabila terjadi error akan bernilai 0.

## `getline`

`getline` adalah fungsi input untuk string yang dapat membaca _whitespace_ di dalam inputan. Di dalam fungsi `cin` dan `scanf` untuk penginputan string tidak dapat membaca _whitespace_, jadi inputan berhenti ketika terdapat _whitespace_. Untuk format penulisan `getline` sebagai berikut :

```cpp
getline(cin, varString);
```

Contoh [program (`getline.cpp`)](getline.cpp)
