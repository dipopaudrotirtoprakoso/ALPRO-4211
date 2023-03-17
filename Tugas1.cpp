#include <iostream>

using namespace std;

int pertambahan(int a, int b) {
    return a + b;
}

int pengurangan(int a, int b) {
    return a - b;
}

int jumlahArray(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

float rata_rataArray(int arr[], int n) {
    int total = jumlahArray(arr, n);
    float rata_rata = (float) total / n;
    return rata_rata;
}


int main() {
    int x, y;
    cout << "Penjumlahan 2 Bilangan "<<endl;
    cout << "Bilangan ke-1: ";
    cin >> x;
    cout << "Bilangan ke-2: ";
    cin >> y;
    int hasilpertambahan = pertambahan(x, y);
    cout << "Hasil penjumlahan: " << hasilpertambahan << endl;

    cout << "\nPengurangan 2 Bilangan"<<endl;
    cout << "Bilangan ke-1: ";
    cin >> x;
    cout << "Bilangan ke-2: ";
    cin >> y;
    int hasilpengurangan = pengurangan(x, y);
    cout << "Hasil pengurangan: " << hasilpengurangan << endl;

    int n;
    cout << "\nFungsi Array"<<endl;
    cout << "Masukkan jumlah elemen : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int total = jumlahArray(arr, n);
    float hasilRataArray = rata_rataArray(arr, n);

    cout << "Total : " << total << endl;
    cout << "Rata-rata : " << hasilRataArray << endl;

    return 0;
}
