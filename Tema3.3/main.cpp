/*Scrieți un program care citește un număr întreg NR de la tastatură, numără câte cifre are și afișează această informație.*/

#include <iostream>

using namespace std;

int main()
{

int nr, nrcifre=0;

cin >> nr;

do

{
    nr=nr/10;

    nrcifre++;

}while(nr);

cout <<"Numarul de cifre a numarului este "<< nrcifre;

    return 0;

}

