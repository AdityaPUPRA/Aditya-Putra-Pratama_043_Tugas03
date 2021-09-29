/* Program Gaji Karyawan */

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

main()
{
awal:
string nik, jwb;
char nama[30];
int jk, status, kendaraan ;
long double gaji_pokok, uang_makan, tunjangan, transport, gaji_kotor, pajak, gaji_bersih;


cout <<"Masukkan Nama:";gets(nama);
cout <<"Masukkan NIK: ";cin>>nik;
cout <<"Masukkan jenis kelamin ";
cout <<"[]0 = Laki-laki, 1 = Perempuan] "; cin>>jk;
cout <<"Masukkan status Pernikahan";
cout <<"[0 = single woles, 1 = menikah] "; cin>>status;

cout <<"\nMasukkan jenis kendaraan";
cout <<"[0 = motor, 1 = mobil] "; cin>>kendaraan;
cout <<"Masukkan Gaji pokok="; cin>>gaji_pokok;
cout <<"Masukkan besar uang makan="; cin>>uang_makan;

//tunjangan
if(jk==0 && status==1)
 {
   tunjangan=500;
 }
   else
   {
   tunjangan=0;
   }


//transport
if(kendaraan==1)
 {
   transport=1000;
   }
   else if(kendaraan==0)
   {
   transport=500;
   }
   else
   {
   transport=0;
   }

//gaji kotor
gaji_kotor=gaji_pokok+tunjangan+uang_makan+transport;

//pajak
pajak=(0.05*gaji_kotor);

//gaji bersih
gaji_bersih=gaji_kotor-pajak;

cout<<"Gaji Kotor="<<gaji_kotor<<endl;
cout<<"Pajak="<<pajak<<endl;
cout<<"Gaji Bersih="<<gaji_bersih<<endl;

if(jwb=="Y" || jwb=="y")
 {
   main();
   goto awal;
   }
   else
   {
   cout<<"\nTerimakasih, Tekan Enter Untuk keluar ^_^";
   }

getch();

}
	

	

