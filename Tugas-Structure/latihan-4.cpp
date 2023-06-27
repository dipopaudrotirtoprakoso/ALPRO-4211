#include <iostream>
#include <cstring>

using namespace std;

typedef struct mahasiswa
{
    char NIM[14];
    string Nama,jurusan;
    int lulus;
}emp;

int main ()
{
    emp* data = new emp[4];
    strcpy(data[0].NIM, "A11.2020.14869");
    data[0].Nama = "Adi";
    data[0].jurusan = "Manajemen";
    data[0].lulus = 2023;

    strcpy(data[1].NIM, "A11.2020.16312");
    data[1].Nama = "Wibowo";
    data[1].jurusan = "Sistem Informasi";
    data[1].lulus = 2023;

    strcpy(data[2].NIM, "A11.2020.01534");
    data[2].Nama = "Rico";
    data[2].jurusan = "Ekonomi";
    data[2].lulus = 2023;

    strcpy(data[3].NIM, "A11.2020.01474");
    data[3].Nama = "Rispo";
    data[3].jurusan = "Kesehatan";
    data[3].lulus = 2023;

    //array statis
    cout << " pakai statis " << endl;
    cout << "     NIM\t\t "<< "Nama\t\t " << "  Jurusan\t\t " << "   Tahun lulus " << endl;
    cout << data[0].NIM << " \t\t" << data[0].Nama << " \t\t" << data[0].jurusan << " \t\t\t" << data[0].lulus << endl;
    cout << data[1].NIM << " \t\t" << data[1].Nama << " \t\t" << data[1].jurusan << " \t\t" << data[1].lulus  << endl;
    cout << data[2].NIM << " \t\t" << data[2].Nama << " \t\t" << data[2].jurusan << " \t\t\t\t" << data[2].lulus  << endl;
    cout << data[3].NIM << " \t\t" << data[3].Nama << " \t\t" << data[3].jurusan << " \t\t\t" << data[3].lulus << endl;

    //array dinamis
    cout << " pakai dinamis " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << data[i].NIM << " \t\t" << data[i].Nama << " \t\t" << data[i].jurusan << " \t\t\t" << data[i].lulus << endl;
    }
    delete[] data;
    return 0;
}
