// By MISTRAL Théo 
// Le 06-10-2022
// TP_GitHeritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"
#include "pointa.h"
using namespace std;

int main()
{
    cout << "TP Heritage avec Git" << endl;


    //----------------- Test des methodes ---------------//
    
    //Point a(7, 14);
    //a.dep(-9, 500);
    //cout << "Point a: On doit avoir:\n\t(0,480)";  a.show(); cout << endl;
    //a.dep(892, 8945);
    //cout << "Point a:  On doit avoir:\n\t(460,480)";  a.show(); cout << endl;
    //a.dep(42, 985);
    //cout << "Point a:  On doit avoir:\n\t(42,480)";  a.show(); cout << endl;
    //a.dep(8952, 412);
    //cout << "Point a:  On doit avoir:\n\t(460,412)";  a.show(); cout << endl;
    //a.dep(100, 200);
    //cout << "Point a:  On doit avoir:\n\t(100,200)";  a.show(); cout << endl;


    Pointa b(361, 155);
    b.dep(89, 4);
    cout << "Point b: "; b.show(); cout << endl;
    cout << "Point b Rho: " << b.rho() << endl;

    Pointa c;
    cout << "Point c: "; c.show(); cout << endl;

    return 0;
}
