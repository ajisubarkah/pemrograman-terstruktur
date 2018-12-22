# Tipe Data

C++ merupakan bahasa pemrograman yang *strongly typed*, oleh karenanya kita tidak bisa mengabaikan tipe data. Kita harus tahu data seperti apa yang disimpan ke dalam variabel. Selain itu, C++ juga bersifat *statically typed*, yang artinya setiap variabel harus dideklarasikan terlebih dahulu sebelum digunakan.

Cara penulisan tipe data di deklarasikan dengan `tipe_data` kemudian diikuti dengan nama `variabel`. Contoh sebagai berikut :

```cpp
int x;
double y;
char z;
```

Tipe data di dalam C++ umumnya dibagi menjadi : 

- **Character Types** dimana hanya dapat menampung 1 karakter misalnya seperti `'A'` atau `'$'`. Tipe data paling dasar adalah `char` atau disebut one-byte character.
- **Numerical Integer Types** yang dapat menyimpan bilangan bulat seperti `1` atau `2018`. Terdiri dari berbagai macam ukuran memory dan dapat menjadi `signed` atau `unsigned` tergantung dapat menampung nilai negatif atau tidak misalnya `int`, `long` atau `short`.
- **Floating-points Types** yang dapat menampung bilangan real atau desimal seperti `3.14` atau `0.11` dengan tingkat desimal yang berbeda seperti `float` atau `double`.
- **Boolean Types** tipe data ini dikenal dengan `bool` didalam C++ dan hanya memilik nilai `true` atau `salah`.

Tabel tipe data :

| Group                       | Tipe Data                                | Size             | Range                                                                                                                          |
| --------------------------  | ---------------------------------------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------ |
| **Character Types**         | `char`                                   | 1                | `-128` to `127`                                                                                                                |
| **Numerical Integer Types** | `short`<br>`int`<br>`long`<br>`long long`| 2<br>4<br>4<br>8 | `-32,768` to `32,767`<br>`-2,147,483,648` to `2,147,483,647`<br>`-2,147,483,648` to `2,147,483,647`<br>`-(2^63)` to `(2^63)-1` |
| **Floating-points Types**   | `float`<br>`double`                      | 4<br>8           | `1.2E-38` to `3.4E+38`<br>`2.3E-308` to `1.7E+308`                                                                             |
| **Boolean Types**           | `bool`                                   | 1                | `true` or `false`                                                                                                              |

### `unsigned` dan `signed` tipe data

- `unsigned` adalah tipe data yang tidak dapat menampung bilangan negatif.
- `signed` adalah tipe data default yang dapat menerima bilangan positif dan negatif.

Contoh penulisan `unsigned` dan `signed` :

```cpp
signed int a = -100;
unsigned short b = 2018;
```
