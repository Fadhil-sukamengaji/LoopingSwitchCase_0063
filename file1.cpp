#include <iostream>
using namespace std;

int main(){
    //perulangan for untuk pencacah naik
    int i;
    cout << "Perulangan For Pencacah Naik" << endl;
    for (i = 0; i <= 4; i++){
            cout << "Nilai i : " << i
            << " Lari keliling lapangan" << endl;
    }

    cout << "Nilai i terakhir : " << i << endl;
    cout << endl;

    //perulangan for untuk pencacah turun
    cout << "Perulangan For Pencacah Turun" << endl;
    for (i = 4; i >= 0; i--){
        cout << "Nilai i : " << i
        << " Lari keliling lapangan" << endl;
    }

    cout << "Nilai i terakhir : " << i << endl;
}