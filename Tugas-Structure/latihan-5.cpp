
#include <iostream>
using namespace std;

struct Jenis
{
    string merk,type,harga;
    int tahun;
};

int main()
{
    Jenis sepeda;
    Jenis *psepeda = &sepeda;

    psepeda->merk = "PHYTON";
    psepeda->type = "Sepeda Lipat";
    psepeda->tahun= 2023;
    psepeda->harga= "1.400.000";

    cout << " merek\t : " << psepeda->merk << endl;
    cout << " type\t : " << psepeda->type << endl;
    cout << " tahun\t : "<< psepeda->tahun << endl;
    cout << " harga\t : "<< psepeda->harga<< endl;
    return 0;
}
