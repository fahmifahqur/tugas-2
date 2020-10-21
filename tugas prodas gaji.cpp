/*Fahmi Fahqur Rozi*/
/*Kelas2020B 20051397060*/

#include <iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include <windows.h>

using namespace std;

int main() 
{
	system("color 0C");
	int jam = 0, jml, total,sisa, sisa1;
	char nama[40], yt, pil;

	
	cout << "Masukan Nama Karyawan : "; cin >> nama; cout << endl;
	cout<<"*************************" << endl;
	cout << "ketik A untuk Golongan A" << endl;
	cout << "ketik B untuk Golongan B" << endl;
	cout << "ketik C untuk Golongan C" << endl;
	cout << "ketik D untuk Golongan D" << endl;
	cout << "Note : Gunakan huruf besar untuk pemilihan." << endl;
	cout<<"*************************" << endl;
	cout << "Pilih kode golongan [A/B/C/D] : ";
    cin >> pil;
    cout << "Jumlah Jam Kerja : ";
    cin >> jam;
    
    if (pil == 'A')
    {
        jml = 5000;
    }
    else if (pil == 'B')
    {
        jml = 7000;
    }
    else if (pil == 'C')
    {
    	jml = 8000;
	}
	else if (pil == 'D')
	{
		jml = 10000;
	}
    

    if (jam > 48)
    {
        sisa = jam - 48; 
        sisa1 = jml * (jam-sisa); 
        total = 4000 * sisa; 
        jml = sisa1 + total;
	}
    
    else
    {
        jml = jml * jam;
    }


    cout << jml<<endl;
    cout <<endl<<"Selamat Menghitung"<<endl;
    

Akhir :
cout <<endl<<"*************************" <<endl;
cout <<"Terima Kasih"<<endl;
cout <<endl<<"*************************" <<endl;
return 0;
} 

