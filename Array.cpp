#include <iostream>
using namespace std;

string matkul[2] = {"pemrograman dasar", "algoritma"};

float nilaiAkhir[2] = {3, 2.5};

char grade[5];

int main()
{
    cout << "Mata Kuliah : " << matkul[1] <<endl;
    matkul[0] = "LOgika Teknik Pemrograman";
    cout << "Mata Kuliah : " << matkul[0] <<endl;

    for(int i = 0; i < 2; i++)
    {
        cout << "Nilai akhir ke-" << i+1 << "=" << nilaiAkhir[1] <<endl;
    }

    cout << "input grade" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "masukan grade : ";
        cin >> grade[1];
    }

    cout <<endl;
    cout << "tampilkan grade" << endl;
    cout << endl;
    
    for(int i = 0; i < 5; i++)
    {
        cout << "grade = " << grade[1] << endl;
    }
}