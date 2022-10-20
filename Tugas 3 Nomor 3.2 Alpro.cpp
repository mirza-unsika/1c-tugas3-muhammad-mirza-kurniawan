#include <iostream>
using namespace std;

int main () {

float v,i,r;

cout << "Program untuk Menghitung Tegangan Listrik (V)\n";
cout << "-----------------------------------------------------\n\n";
cout << "Masukkan Kuat Arus (i) : \n";
cin >> i;
cout << "Masukkan Hambatan (R) :\n";
cin >> r;
v = i * r;
cout << "Besar tegangan listrik dengan arus sebesar "<<i<<" Ampere dan hambatan sebesar "<<r<<" Ohm adalah " <<v<< " V";

return 0;
}
