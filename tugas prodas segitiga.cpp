/*Fahmi Fahqur Rozi*/
/*Kelas2020B 20051397060*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main()
{
	int a,t;
	float luas,keliling,sm;
	
	system ("color 0B");
	cout << "----------------------" << endl;
	cout << "Masukan datamu" << endl;
	cout << "Masukan Panjang Alas: ";
	cin >> a;
	cout << "Masukan Tinggi segitiga: ";
	cin >> t;
	
	sm = sqrt((a*a)+(t*t));
	luas = 0.5*a*t;
	keliling = a+t+sm;
	
	cout << "----------------------" << endl;
	cout << "Hasil perhitungan" << endl;
	cout << "----------------------" << endl;
	cout << "Sisi miringnya adalah: " << sm << endl;
	cout << "Kelilingnya adalah: " << keliling << endl;
	cout << "Luasnya adalah: " << luas << endl;
	
	return 0;
}
