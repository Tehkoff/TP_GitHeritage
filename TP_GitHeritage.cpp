// By MISTRAL Théo 
// Le 06-10-2022
// TP_GitHeritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    cout << "TP Heritage avec Git" << endl;

    Point a(7,14);

    a.dep(-9, 500);
    cout << "Point a: ";  a.show(); cout << endl;
    a.dep(892, 8945);
    cout << "Point a: ";  a.show(); cout << endl;
    a.dep(42, 985);
    cout << "Point a: ";  a.show(); cout << endl;
    a.dep(8952, 412);
    cout << "Point a: ";  a.show(); cout << endl;
    a.dep(100, 200);
    cout << "Point a: ";  a.show(); cout << endl;


    return 0;
}
