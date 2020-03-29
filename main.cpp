#include <iostream>

using namespace std;

int main(){
    system("cls");
    // Pointer Merupakan sebuah Variabel yang memiliki nilai sebuah alamat memory
    // Tipe Data Variabel yang bisa diisi alamat memory yaitu integer
    

    int A;   // Deklarasi Variabel
    // Cara Mengetahui Alamat Memory A;
    cout << "Alamat Dari Variabel (A) : " << &A << endl;
    cout << "Masukkan Nilai dari (A) : ";
    cin >> A;
    cout << endl;

    // Alamat Memory A dimasukkan pada Variabel B
    int *B = &A; // Disertai Bintang menandakan Pointer

    cout << "Nilai dari Variabel (B) : " << *B << endl;  // Menampilkan Nilai Variabel Alamat
    cout << "Alamatnya : " << B;  // Menampilkan Alamat Memory

    cout << endl << endl;
    system("pause");
    system("cls");
    return 0;
}