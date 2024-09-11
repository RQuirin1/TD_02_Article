#include "Article.h"


Article::Article(string n) {
	nom = n;
	prixHT = 0.0;
	stock = 0;
}

string Article::getNom() {
	return nom;
}