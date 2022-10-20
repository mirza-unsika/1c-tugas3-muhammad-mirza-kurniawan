#include <iostream>
using namespace std;

int main () {

float v,i,r;

cout << "Program untuk Menghitung Hambatan Listrik (R)\n";
cout << "-----------------------------------------------------\n\n";
cout << "Masukkan Tegangan (V) : \n";
cin >> v;
cout << "Masukkan Besar Arus (I) :\n";
cin >> i;
r = v/i;
cout << "Besar hambatan listrik dengan tegangan sebesar "<<v<<"V dan besar arus "<<i<<" Ampere adalah " <<r<< " Ohm";

return 0;
}
