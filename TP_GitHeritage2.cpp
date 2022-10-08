// By Mistral T
// Le 08/10/2022

#include <iostream>
#include "Pointb.h"



int main()
{
    cout << "TP Git Heritage 2" << endl;

    Pointb d(100, 56, 107,-89, 984);
    cout << "Point d: "; d.show(); cout << endl;
    
    Pointb e(123, 456, 50, 50, 50);
    cout << "Point e: "; e.show(); cout << endl;

    d = e;
    cout << "Point d: "; d.show(); cout << endl;
    cout << "Point e: "; e.show(); cout << endl;

}