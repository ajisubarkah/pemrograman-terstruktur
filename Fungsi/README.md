# Fungsi

Fungsi merupakan kumpulan statement yang dapat melakukan sebuah task. Pada C++ setiap program harus memiliki setidaknya satu fungsi, yaitu `main()` dan selain itu disebut fungsi tambahan. Format pendeklarasian suatu fungsi sebagai berikut :

```cpp
return_type function_name( parameter list ) // header fungsi
{ 	
   body of the function                     // body fungsi
}
```

Definisi fungsi pada C++ terdiri dari header fungsi dan body fungsi. Berikut semua bagian dari fungsi :

- **Return Type** merupakan fungsi yang dapat mengembalikan nilai. Tipe dari return_type adalah tipe data dari nilai yang akan di kembalikan. Ada sebuah fungsi yang tidak memerlukan pengembalian nilai, yaitu `void`.
- **Function Name** adalah nama dari fungsi itu sendiri. Didalam penamaan fungsi berlaku juga [cara penamaan variabel]().
- **Parameter** seperti tempat untuk penampung nilai dan hanya dapat di gunakan didalam fungsi tersebut. Parameter bersifat opsional, yang artinya suatu fungsi dapat tidak mengandung parameter.
- **Function Body** berisi kumpulan statement yang akan dilakukan setelah fungsi di panggil.

### Function Return Type

Contoh penggunaan return type terdapat [fungsi.cpp](fungsi.cpp) :

```cpp
int max(int a, int b) {
    int result;

    if(a < b)
        result = b;
    else
        result = a;

    return result;
}
```

Pada penggunaan fungsi return value untuk mengembalikan nilai harus menggunakan `return` yang kemudian diikuti dengan nilai yang akan di kembalikan. Nilai dari return fungsi dapat ditampung di dalam variabel lain yang terdapat di `main` program. Contoh sebagai berikut :

```cpp
int resultMax = max(a, b);
```

### Function No Return Type

Contoh penggunaan fungsi `void` pada [fungsi.cpp](fungsi.cpp) :

```cpp
void printMax(int result) {
    cout << "Maximum number is : " << result << endl;
}
```

Fungsi `void` tidak memiliki nilai return dan dapat langsung dilakukan pemanggilan.

```cpp
printMax(resultMax);
```

## Declaring and Calling Function

Pada C++ fungsi dapat dideklarasikan secara terpisah dengan cara membuat header fungsi terlebih dahulu dan mendeklarasikan body fungsi. Seperti program [fungsi.cpp](fungsi.cpp) berikut :

```cpp
double divide(int a, int b);

main() {
     // TODO: Body main program
}

double divide(int a, int b) {
    return (double) a / b;
}
```

## Function Arguments

Pada saat memanggil fungsi, ada beberapa cara argumen yang dapat digunakan dalam fungsi, yaitu :

| Types                 | Description                                                   |
| --------------------- | ------------------------------------------------------------- |
| **Call by Value**     | Metode ini menyalin nilai aktual argument ke parameter.       |
| **Call by Pointer**   | Metode ini menyalin alamat (*pointer*) argument ke parameter. |
| **Call by Reference** | Metode ini menyalin reference argument ke parameter.          |

### Call by Value

Pada dasarnya C++ menggunakan **call by value** untuk memberikan argumen secara default. Yang berarti argumen dalam fungsi tidak dapat mengubah argumen yang digunakan pada saat memanggil fungsi tersebut. Contohnya pada [argumen.cpp](argumen.cpp) :

```cpp
void callByValue(int a, int b) {
    a *= 2;
    b *= 2;
    cout << "A : " << a << " B : " << b << endl;
}
```

Pada saat argumen `a` dan `b` di berikan dalam fungsi, nilai `a` dan `b` di `main` tidak akan berubah namun yang berubah hanya di fungsi tersebut.

### Call by Reference

Untuk melakukan penggunaan reference harus menggunakan simbol `&` pada penggunaan parameter. Seperti contoh [argumen.cpp](argumen.cpp) :

```cpp
void callByReference(int& a, int& b) {
    a *= 2;
    b *= 2;
    cout << "A : " << a << " B : " << b << endl;
}
```

Nilai yang terdapat pada variabel yang digunakan sebagai argumen juga akan ikut termodifikasi.

## Recursivity

Rekursif adalah penggunaan fungsi yang memanggil fungsi itu sendiri. Contoh [rekursif.cpp](rekursif.cpp) :

```cpp
long faktorial(int n) {
    if(n > 0) {
        return n * faktorial(n-1);
    } else {
        return 1;
    }
}
```

Pada faktorial akan memanggil dirinya sendiri hingga `n` bernilai 0 yang kemudian akan di `return 1;` yang berarti akan mengembalikan nilai yang telah tertampung.


### Example Recursivity

- [Program konversi_kapital.cpp](konversi_kapital.cpp)