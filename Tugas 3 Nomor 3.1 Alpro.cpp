#include <iostream>
using namespace std;

int main () {

float v,i,r;

cout << "Program untuk Menghitung Arus Listrik (I)\n";
cout << "-----------------------------------------------------\n\n";
cout << "Masukkan Tegangan (V) : \n";
cin >> v;
cout << "Masukkan Hambatan (R) :\n";
cin >> r;
i = v/r;
cout << "Besar arus listrik dengan tegangan sebesar "<<v<<"V dan hambatan sebesar "<<r<<" Ohm adalah " <<i<< " Ampere";

return 0;
}
