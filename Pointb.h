#pragma once
#include "../TP_GitHeritage/pointa.h"


struct byteColor
{
	char rouge;
	char vert;
	char bleu;
};


class Pointb : public Pointa
{
	private:
		byteColor couleur;

	public:
		//x,y,rouge,vert,bleu
		Pointb(long abs, long ord, char pRouge,char pVert,char pBleu);
		Pointb();
		Pointb(Pointb& const);
		Pointb operator=(Pointb& const);

		int getVert();
		void setVert(int pVert);

		int getRouge();
		void setRouge(int pRouge);

		int getBleu();
		void setBleu(int pBleu);
				
};

