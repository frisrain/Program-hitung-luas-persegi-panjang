#include <iostream>
#include <string>
using namespace std;

// ========================================
// TUGAS INFORMATIKA KELAS XII
// IMPLEMENTASI ALGORITMA DALAM C++
// ========================================

// Nama Lengkap : Friska Dwi Anggraeni
// Kelas        : XII-7
// Nomor Absen  : 15
// Judul Program: Program Hitung Luas Persegi Panjang

int main() {

    // 1. DEKLARASI VARIABEL
   float L,p,l;


    // 2. INPUT
  cout << "Masukkan nilai panjang persegi panjang: "<< endl;
    cin >> p;
    
    cout << "Masukkan nilai lebar persegi panjang: "<< endl;
    cin >> l;


    // 3. PROSES
    L = p * l;

    // 4. OUTPUT
   cout << "Luas persegi panjang adalah: " << L << endl;

    return 0;
}
