/*Scrieți un program care să afișeze tabla înmulțirii până la 25, adică fiecare număr de la 1 la 25 înmulțit pe rând cu toate numerele de la 1 la 25.*/
#include <iostream>

using namespace std;

int main()
{
    int i,j;

    for (i=1;i<=25;i++)
    {
        for (j=1;j<=25;j++)
            cout<<i*j<<" ";
        cout<<endl;
    }
    return 0;
}
