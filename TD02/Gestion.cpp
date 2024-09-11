#include "Gestion.h"


Gestion::Gestion() {

}

void Gestion::ajoutArticle(string nom, double prix, int stock) {

	Article* art1 = new Article(nom);
	art1->prixHT = prix;
	art1->stock = stock;

	mesArticles.push_back(art1);
}

Article* Gestion::lireArticle(string nom) {

	for (int i = 0; i < mesArticles.size(); i++)
	{
		if (nom == mesArticles[i]->getNom())
		{
			return mesArticles[i];
		}
	}
	return NULL;
}

void Gestion::modifArticle() {




}

void Gestion::suppArticle(Article* art) {
	if (!mesArticles.empty()) {
		int found = -1;
		for (int i = 0; i < mesArticles.size(); i++)
		{
			Article* temp = mesArticles[i];
			if (temp == art)
			{
				found = i;
				break;
			}
		}
		if (found != -1)
			mesArticles.erase( mesArticles.begin() + found);
	}
}