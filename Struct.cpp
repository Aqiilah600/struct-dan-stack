#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

void inputdata(mahasiswa *prodi_TI) {
    cout << "Nama   : ";
    getline(cin, prodi_TI->nama);
    cout << "NIM    : ";
    getline(cin, prodi_TI->nim);
    cout << "Alamat : ";
    getline(cin, prodi_TI->alamat);
    cout << "IPK    : ";
    cin >> prodi_TI->ipk;
    cin.ignore();
}

int main() {
    mahasiswa Aqiilah;

    Aqiilah.nim = "C030324010";
    Aqiilah.nama = "Aqiilah";
    Aqiilah.alamat = "JL. Tatah Bangkal Komp. Puri Awanis Blok Mawar No.138";
    Aqiilah.ipk = 3.32;

    cout << "\n=== Data ===\n";
    cout << "Nama   : " << Aqiilah.nama << "\n";
    cout << "NIM    : " << Aqiilah.nim << "\n";
    cout << "Alamat : " << Aqiilah.alamat << "\n";
    cout << "IPK    : " << Aqiilah.ipk << "\n";

    return 0;
}
