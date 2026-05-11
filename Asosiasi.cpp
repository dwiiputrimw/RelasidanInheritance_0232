#include <iostream>
#include <vector>
using namespace std;

//deklarasi class dokter
class dokter; 

//deklarasi dan pembuatan class pasien
class pasien {
public:
    //deklarasi member variabel dari class pasien
    string nama;
    vector<dokter*> daftar_dokter;
}

//pembuatan class dokter
class dokter {
public:
    //deklarasi member variabel dari class dokter
    string nama;
    vector<pasien*> daftar_pasien;
};