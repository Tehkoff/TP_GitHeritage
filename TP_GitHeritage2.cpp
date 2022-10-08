// By Mistral T
// Le 08/10/2022

#include <iostream>
#include "Pointb.h"



int main()
{
    cout << "TP Git Heritage 2" << endl;

    Pointb d(100, 56, 107,-89, 984);
    Pointb e = d;

    cout << "Point d: "; d.show(); cout << endl;
    cout << "Point e: "; e.show(); cout << endl;
}