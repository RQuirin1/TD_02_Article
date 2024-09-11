#pragma once
#include <string>
#include <vector>
#include "Article.h"
using namespace std;

class Gestion
{
	vector<Article*> mesArticles;
public:
	Gestion();
	void ajoutArticle(string nom, double prix, int stock);
	Article* lireArticle(string nom);
	void modifArticle();
	void suppArticle( Article* art);
	

};

