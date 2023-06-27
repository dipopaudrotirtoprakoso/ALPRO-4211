#include <iostream>

using namespace std;

enum Cuaca { Cerah = 80, Berawan = 60, Hujan = 40, Badai = 20 };

int main()
{
Cuaca today = Cuaca::Hujan;
cout << "Cuaca hari ini: ";
if (today == Cuaca::Cerah)
{
    cout << "Cerah" << endl;
}
else if (today == Cuaca::Berawan)
{
    cout << "Berawan" << endl;
}
else if (today == Cuaca::Hujan)
{
    cout << "Hujan" << endl;
}
else if (today == Cuaca::Badai)
{
    cout << "Badai" << endl;
}

return 0;
}
