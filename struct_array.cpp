#include <iostream>
#include <string>
using namespace std;

struct Skill
{
    string skill1;
    string skill2;
    string skill3;

};

struct Hero
{
    string Nama;
    string Role;
    string Tipe;
    Skill skill;
};

int main()
{
    Hero arhero[3];
for (int i = 0; i < 3; i++)
{
    cout << "Hero ke-" << i+1 <<endl;
    cout << "masukkan Nama Hero = ";
    cin >> arhero[i].Nama;
    getline(cin, arhero[i].Nama);
    cout << "masukkan Role Hero = ";
    cin >> arhero[i].Role;
    getline(cin, arhero[i].Role);
    cout << "masukkan Tipe Hero = ";
    cin >> arhero[i].Tipe;
    cin.ignore();

    cout << "masukkan skill1";
    getline(cin, arhero[i].skill.skill1);
    cout << "masukkan skill2";
    getline(cin, arhero[i].skill.skill2);
    cout << "masukkan skill3";
    getline(cin, arhero[i].skill.skill3);

}
    cout << endl;
    cout << "Tampilkan Hero = " <<endl;
    cout << endl;
for (int i = 0; i < 3; i++)
{
    cout << "Hero ke-" << i+1 <<endl;
    cout << "Nama Hero = " << arhero[i].Nama <<endl;
    cout << "Role Hero = " << arhero[i].Role <<endl;
    cout << "Tipe Hero = " << arhero[i].Tipe <<endl;
}
}