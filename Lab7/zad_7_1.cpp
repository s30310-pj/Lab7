#include <iostream>
 
using namespace std;

struct uczniowie
{
    string imie;
    string nazwisko;
};

int main()
{
    struct uczniowie listaUczniow[3][2];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Podaj imie ucznia nr "<<i+1<<": ";
        cin>>listaUczniow[i][1].imie;
        cout<<"Podaj nazwisko ucznia nr "<<i+1<<": ";
        cin>>listaUczniow[i][2].nazwisko;
    }
    cout<<endl<<"Imiona i nazwiska trzech osob:"<<endl;
    for (int j = 0; j < 3; j++) {
            cout<<"Osoba nr "<<j+1<<": "<<listaUczniow[j][1].imie
            <<" "<<listaUczniow[j][2].nazwisko;
        cout << endl;
    }
    
    return 0;
}