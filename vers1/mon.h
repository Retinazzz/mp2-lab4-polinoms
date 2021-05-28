#pragma once
using namespace std;
class MONOM
{
public:
    float Coef; // коэффициент
    int Index; // индекс
    int d_x, d_y, d_z; // степени x,y и z соответственно
    MONOM()  // создание пустого монома
    {
        Coef = 0;
        Index = -1;
        d_x = 0;
        d_y = 0;
        d_z = 0;
    }
    MONOM(float Coef, int Index)  // создание пустого монома
    {
        Coef = 0;
        Index = -1;
        d_x = 0;
        d_y = 0;
        d_z = 0;
    };
    ~MONOM() { };
    void set_monom()
    {
        cout << "\nVvedite Coef:";
        cin >> Coef;
        /*cout << "\nVvedite X degree:";
        cin >> d_x;
        cout << "\nVvedite Y degree:";
        cin >> d_y;
        cout << "\nVvedite Z degree:";
        cin >> d_z;*/
        cout << "\n Vvedite indexs";
        cin >> Index;
        if (((Index / 100) > 9) || (((Index % 100 - Index % 10) / 10) > 9) || ((Index % 10) > 9))
        {
            throw "error";
            Coef = 0;
        };
    };
    void print_monom()
    {
        cout << "Vash Monom:";
        cout << Coef << " " << Index << " x^" << Index / 100 << "* y^" << (Index % 100 - Index % 10) / 10 << "* z^" << Index % 10 << endl;
    };
    void minus(MONOM* a, MONOM* b)
    {
        MONOM c;
        int BB = b->Index;
        int AA = a->Index;
        float Ca = a->Coef;
        float Cb = b->Coef;
        if (AA == BB)
        {
            c.Coef = Ca - Cb;
            cout << c.Coef << " x^" << AA / 100 << "* y^" << (AA % 100 - AA % 10) / 10 << "* z^" << AA % 10 << endl;
        }
        else cout << Ca << " x^" << AA / 100 << "* y^" << (AA % 100 - AA % 10) / 10 << "* z^" << AA % 10 <<
            "-" << BB << " x^" << BB / 100 << "* y^" << (BB % 100 - BB % 10) / 10 << "* z^" << BB % 10 << endl;
    }
    void sum_mon(MONOM* a, MONOM* b)
    {
        MONOM c;
        int BB = b->Index;
        int AA = a->Index;
        float Ca = a->Coef;
        float Cb = b->Coef;
        if (AA == BB)
        {
            c.Coef = Ca + Cb;
            cout << c.Coef << " x^" << AA / 100 << "* y^" << (AA % 100 - AA % 10) / 10 << "* z^" << AA % 10 << endl;
        }
        else (cout << Ca << " x^" << AA / 100 << "* y^" << (AA % 100 - AA % 10) / 10 << "* z^" << AA % 10 <<
            "+" << Cb << " x^" << BB / 100 << "* y^" << (BB % 100 - BB % 10) / 10 << "* z^" << BB % 10 << endl);
    }
    void mm(MONOM* a, MONOM* b)
    {
        float Cb = b->Coef;
        Cb = Cb * -1;
        sum_mon(a, b);
    }
    void x_x(MONOM* a, MONOM* b)
    {
        MONOM c;
        c.Coef = a->Coef * b->Coef;
        c.d_x = (a->Index / 100) + (b->Index / 100);
        c.d_y = ((a->Index % 100 - a->Index % 10) / 10) + ((b->Index % 100 - b->Index % 10) / 10);
        c.d_z = (a->Index % 10) + (b->Index % 10);
        cout << c.Coef << " x^" << c.d_x << "* y^" << c.d_y << "* z^" << c.d_z << endl;
    }
    void xconst(MONOM* a, float con)
    {
        MONOM c;
        c.Coef = a->Coef * con;
        c.Index = a->Index;
        cout << c.Coef << " x^" << a->Index / 100 << "* y^" << (a->Index % 100 - a->Index % 10) / 10 << "* z^" << a->Index % 10 << endl;
    }

};