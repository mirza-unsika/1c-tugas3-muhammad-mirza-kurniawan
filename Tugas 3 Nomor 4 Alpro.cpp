#include <iostream>
using namespace std;

int main () {
float y;
const float x=15, b = 25, c = 20;

cout << "Program untuk menyelesaikan persamaan Y = bx2 + 0,5x – c\n";
cout<< "-----------------------------------------------------------------\n\n";
cout<< "Jika diketahui:\nb = 25\nc = 20\nx = 15\n";
y = b * x * x + 0.5 * x - c;
cout<< "\nMaka dari persamaan Y = bx2 + 0,5x - c, didapatkan Y = "<<y;

return 0;
}
