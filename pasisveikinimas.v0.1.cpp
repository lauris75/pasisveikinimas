#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Koks Jusu vardas: ";
    string vardas;
    cin >> vardas;
    int n;
    cout << "Iveskite remelio dydi (nuo 1 iki 10): ";
    cin >> n;
    cout << endl;
    int x, tik;
    if(vardas.substr(vardas.length() - 1) == "s")tik = 1;
    else tik = 0;
    x = vardas.length();
    if(tik == 1) x++;
    string galas;
    for (int i = 0; i < x+16; i++)
    {
        galas = galas + '*';
    }
    cout << galas << endl;
    string sonai;
    sonai = '*';
    for (int i = 0; i < x+14; i++)
    {
        sonai = sonai + ' ';
    }
    sonai = sonai + '*';
    for (int i = 0; i < n; i++)
    {
        cout << sonai << endl;
    }
    string vidurys;
    if(tik == 1)vidurys = "*  Sveikas, " + vardas + "!   *";
    else vidurys = "*  Sveika, " + vardas + "!   *";
    cout << vidurys << endl;
    for (int i = 0; i < n; i++)
    {
        cout << sonai << endl;
    }
    cout << galas << endl;
    return 0;
}
