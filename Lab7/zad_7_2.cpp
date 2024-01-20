#include <iostream>

using namespace std;

int silnia(int n) {
    if(n>1)
        return n*silnia(n-1);
    else
        return 1;
}

int n, wynik;

int main() {
   cout<<"Podaj n: ";
   cin>>n;
   cout<<n<<"! = "<<silnia(n)<<endl;
   wynik=silnia(n);
   cout<<"Wynik jest podzielny przez:"<<endl;
    if (wynik%2==0)
        cout<<2<<endl;
    if (wynik%3==0)
        cout<<3<<endl;
    if (wynik%5==0)
        cout<<5<<endl;
    if (wynik%11==0)
        cout<<11<<endl;
}