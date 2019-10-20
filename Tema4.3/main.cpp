#include <iostream>

using namespace std;

int main()
{
int var;
void*pntvar;
pntvar=&var;
*static_cast<int*>(pntvar)=1000;
cout<<"Valoarea variabilei var in mod direct = "<<var<<endl;
cout<<"Valoarea variabilei var prin dereferentiere = "<<*static_cast<int*>(pntvar)<<endl;
return 0;
}
