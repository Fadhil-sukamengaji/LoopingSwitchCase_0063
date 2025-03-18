#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
   //perulangan while
   cout << "Perulangan While" << endl;
   int x;
   int perulanganWhile = 0;
   int perulanganDoWhile = 0;
   srand(time(0));
   x = rand() % 10;

   cout << "Nilai x awal : " << x << endl;
   while(x < 7){
        cout << "Nilai x awal : " << x << " Lari keliling lapangan" << endl;
        x = rand() % 10;
        perulanganWhile++;
   }
   cout << "Nilai x akhir : " << x << endl;
   cout << "Jumlah perulangan : " << perulanganWhile << endl;
   cout << endl;

   //perulangan do while
   cout << "Perulangan Do While" << endl;
   do{
        cout << "Nilai x : " << x << "Lari keliling lapangan" << endl;
        x = rand() % 10;
        perulanganDoWhile++;
   }while (x < 7);
   cout << "Nilai x akhir : " << x << endl;
   cout << "Jumlah perulangan : " << perulanganDoWhile << endl;
}