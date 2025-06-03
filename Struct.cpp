#include <iostream>
#include <string>
using namespace std;

 struct mahasiswa{
	string nim;
  string nama;
  string alamat;
  float ipk;
};

int main () {

mahasiswa Aqiilah;

Aqiilah.nim="C030324010";
Aqiilah.nama="'Aqiilah";
Aqiilah.alamat="JL.Tatah Bangkal Komp.Puri Awanis Blok.Mawar No.138";
Aqiilah.ipk=3.32;

cout << Aqiilah.nim<<"\n";
cout << Aqiilah.nama<<"\n";
cout << Aqiilah.alamat<<"\n";
cout << Aqiilah.ipk<<"\n";

inputdata(&Aqiilah);
    cout << "=== Data input ===\n" << endl;
    cout << "Nama: " << Aqiilah.nama << "\n";
    cout << "Nim: " << Aqiilah.nim << "\n";
    cout << "alamat: " << Aqiilah.alamat << "\n";
    cout << "ipk: " << Aqiilah.ipk << "\n";


return 0;


}
	