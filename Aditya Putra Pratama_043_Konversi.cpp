/* Program Konversi Nilai */

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int nilai;
    string hasil;

    while(1){
        cout<<"Konversi Nilai Angka Menjadi Nilai Huruf";
        cout<<"\nMasukkan nilai: ";
        cin>>nilai;

        if(nilai >= 80 && nilai <= 100){
            hasil = "A";
        }
        else if(nilai >= 65 && nilai <= 79) {
            hasil = "B";
        }
        else if(nilai >= 50 && nilai <= 64) {
            hasil = "C";
        }
        else if(nilai >= 35 && nilai <= 49) {
            hasil = "D";
        }
        else if(nilai >= 0 && nilai <= 34) {
            hasil = "E";
        }
        cout<<"Nilai: "<<hasil<<endl;
    getch();
    system("cls");
    }

return 0;
}

