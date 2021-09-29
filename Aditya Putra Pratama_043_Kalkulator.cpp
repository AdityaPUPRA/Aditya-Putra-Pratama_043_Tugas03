/* Program Kalkulator */

#include <conio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
	
	int a,b, pil;
	float hasil;
	string operasi;
	
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	cout<<"Masukan Bilangan pertama : ";
	cin>>a;
	cout<<"Masukan Bilangan kedua : ";
	cin>>b;	
	
	switch(pil){
	        case 1 : hasil=a+b;
			operasi='+';
			break;
		case 2 : hasil=a-b;
			operasi='-';
			break;
		case 3 : hasil=a*b;
			operasi='*';
			break;
		case 4 : hasil=a/b;
			operasi='/';
			break;
		case 5 : hasil=a%b;
			 operasi='%';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"Hasil="<<a<<operasi<<b<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
}
