#include "Pointb.h"

Pointb::Pointb(long abs, long ord,char pRouge,char pVert ,char pBleu): Pointa(abs,ord)
{
    setRouge(pRouge);
    setVert(pVert);
    setBleu(pBleu);
}

Pointb::Pointb(Pointb& const pObjet)
{
    if (this != &pObjet)
    {
        couleur.rouge = pObjet.couleur.rouge;
        couleur.vert = pObjet.couleur.vert;
        couleur.bleu = pObjet.couleur.bleu;

        x = pObjet.x;
        y = pObjet.y;
    }
}

Pointb Pointb::operator=(Pointb& const pObjet)
{
    if (this != &pObjet)
    {
        x = pObjet.x;
        y = pObjet.y;

        couleur.rouge = pObjet.couleur.rouge;
        couleur.vert = pObjet.couleur.vert;
        couleur.bleu = pObjet.couleur.bleu;
    }
    
    return *this;
}

int Pointb::getVert()
{
    return couleur.vert;
}

int Pointb::getRouge()
{
    return couleur.rouge;
}

int Pointb::getBleu()
{
    return couleur.bleu;
}

void Pointb::setVert(int pVert)
{
    if (pVert >= 0 && pVert <= 255)
    {
        couleur.vert = pVert;
    }
    else
    {
        couleur.vert = 0;
    }
    
}

void Pointb::setRouge(int pRouge)
{
    if (pRouge >= 0 && pRouge <= 255)
    {
        couleur.rouge = pRouge;
    }
    else
    {
        couleur.rouge = 0;
    }

}

void Pointb::setBleu(int pBleu)
{
    if (pBleu >= 0 && pBleu <= 255)
    {
        couleur.bleu = pBleu;
    }
    else
    {
        couleur.bleu = 0;
    }

}


