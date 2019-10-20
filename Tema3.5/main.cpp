#include <iostream>

using namespace std;

int main()
{
   int trim;
   cout << "Introduceti trimestrul dorit!"<< endl;
   cin >> trim;
   while(trim < 1 || trim> 4)
    {
        cout << "Valoarea introdusa nu este valida! Introduceti o valoare valida!"<< endl;
        cin >> trim;
    }
    switch (trim)
    {case 1 : cout << "Profitul firmei pe trimestrul 1 este in valoare de 3000"<< endl<<"Bilantul pe anul anterior este in valoare de 8375";break;
     case 2 : cout << "Profitul firmei pe trimestrul 2 este in valoare de 5000"<< endl;break;
     case 3 : cout << "Profitul firmei pe trimestrul 3 este in valoare de 4000"<< endl;break;
     case 4 : cout << "Profitul firmei pe trimestrul 4 este in valoare de 2500"<< endl;break;
    }
    return 0;
}

