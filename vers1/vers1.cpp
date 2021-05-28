#include <iostream>
#include "mon.h"
using namespace std;
int N1, N2; // количество мономов в 1 и 2 полиноме соответственно



// Main
int main()
{
    float con;
    MONOM* monom1= new MONOM;
    MONOM* monom2 = new MONOM;
    MONOM* result = new MONOM;
    cout << "\n1 monom:";
    monom1->set_monom();
    monom1->print_monom();
    cout << "\n2 monom:";
    monom2->set_monom();
    monom2->print_monom();
    cout << "\n Summa ";
    result->sum_mon(monom1,monom2);
    //cout << "\n Minus ";
    //result->mm(monom1, monom2);
    cout << "\n Minus ";
    result->minus(monom1, monom2);
    cout << "\n Umnozhenie monomov ";
    result->x_x(monom1, monom2);
    cout << "Vvedite constantu, na kotoroyu neobhodimo ymnozhit";
    cin >> con;
    cout << "\n Umnozhenie na const ";
    result->xconst(monom1, con);
    return 0;

}