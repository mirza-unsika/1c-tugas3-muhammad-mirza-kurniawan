#include <iostream>
using namespace std;

int main (){

    float p, ut, ua, h;

    cout << "Program Untuk Menghitung Nilai Akhir Mahasiswa\n";;
    cout << "----------------------------------------------------------------\n\n";
    cout << "Dengan bobot nilai akhir Algoritma dan Pemrograman adalah sebagai berikut:\n";
    cout << "Praktikum = 20%\nUTS = 30%\nUAS = 50%\n\n";
    cout << "Diketahui Nilai Mahasiswa:\nPraktikum = 75\nUTS = 70\nUAS = 88\n";
    p = 0.2 * 75,
    ut = 0.3 * 70,
    ua = 0.5 * 88;
    h = p + ut + ua;
    cout << "Maka nilai akhir mahasiswa tersebut adalah "<<h;



return 0;
}
