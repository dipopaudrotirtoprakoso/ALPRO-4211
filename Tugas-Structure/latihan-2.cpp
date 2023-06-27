#include <iostream>
using namespace std;

struct Jenis
{
    string merk,type,harga;
    int tahun;
};
Jenis sepeda;

int main()
{
    sepeda.merk = "PHYTON";
    sepeda.type = "Sepeda Lipat";
    sepeda.tahun= 2023;
    sepeda.harga= "1.400.000";
    cout << " merek\t : " << sepeda.merk << endl;
    cout << " type\t : " << sepeda.type << endl;
    cout << " tahun\t : "<< sepeda.tahun << endl;
    cout << " harga\t : "<< sepeda.harga<< endl;
    return 0;
}
