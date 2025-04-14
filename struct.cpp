#include <iostream>
using namespace std;

struct Hero{
    string Nama;
    string Role;
    string Tipe;
};

int main()
{
    Hero arhero;

    cout << "masukkan Nama Hero = ";
    cin >> arhero.Nama;
    cout << "masukkan Role Hero = ";
    cin >> arhero.Role;
    cout << "masukkan Tipe Hero = ";
    cin >> arhero.Tipe;

    cout << endl;
    cout << "Tampilkan Hero = " <<endl;
    cout << endl;

    cout << "nama Hero = " << arhero.Nama <<endl;
    cout << "Role Hero = " << arhero.Role <<endl;
    cout << "Tipe Hero = " << arhero.Tipe <<endl;

}