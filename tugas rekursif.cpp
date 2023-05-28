#include <iostream>

using namespace std;

int penjumlahan(int a,int b){
    if (a==0){
        return b;
    } else if(b==0){
        return a;
    } else{
        return  1 + penjumlahan(a,b-1);
    }
    }

int pengurangan(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return pengurangan(a - 1, b - 1);
    }
}

int perkalian(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}

int pembagian(int a, int b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}

int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main()
{
    cout << "Hasil penjumlahan: " << penjumlahan(5, 5)<<endl;
    cout << "Hasil pengurangan: " << pengurangan(5, 5)<<endl;
    cout << "Hasil perkalian  : " << perkalian(5, 5)<<endl;
    cout << "Hasil pembagian  : " << pembagian(5, 5)<<endl;
    cout << "Hasil pangkat    : " << pangkat(5, 5)<<endl;
    return 0;
}
