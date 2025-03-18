#include <iostream>
using namespace std;

float LuasPersegiPanjang(float p, float l){
    return p * l;
}

float LuasLingkaran(float r){
    return 3.14 * r * r;
}

int main(){
    int pilihan;
    float panjang, lebar, jejari;

    do{
        cout << "===========MENU===========" << endl;
        cout << "1. Menghitung Luas Persegi Panjang" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Exit" << endl;
        cin >> pilihan;

        switch(pilihan) {
            case 1 :
                cout << "Menghitung Luas Persegi panjang" << endl;
                cout << "Masukkan Panjang : ";
                cin >> panjang;
                cout << "Masukkan Lebar : ";
                cin >> lebar;
                cout << "Luas Persegi Panjang : " <<
                LuasPersegiPanjang(panjang, lebar) << endl;
                cout << endl;
                break;

            case 2 :
                cout << "Menghitung Luas Lingkaran" << endl;
                cout << "Masukkan Jejari : ";
                cin >> jejari;
                cout << "Luas Lingkaran : " <<
                LuasLingkaran(jejari) << endl;
                cout << endl;
                break;

            case 3 :
                break;
            default :
                cout << "Pilihan anda salah" << endl;
                cout << endl;
        }
    }while(pilihan != 3);
}