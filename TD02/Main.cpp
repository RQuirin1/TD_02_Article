#include "Gestion.h"
#include <iostream>
using namespace std;



void main()
{
	Gestion maGestion;
	int choix;
	bool loop = false;
	int restart;

	do
	{


		cout << "Selectionner une action (entrez son chiffre) : " << endl;
		cout << " 1/ Ajouter un article" << endl << " 2/ Lire un article" << endl << " 3/ Supprimer un article" << endl << " 4/ Modifier un article" << endl << " 5/ Afficher les articles";
		cout << endl << " 6/ Afficher le prix total du stock" << endl;
		cout << "Votre choix : ";
		cin >> choix;

		switch (choix)
		{
		case 1:
			string nom;
			double prix;
			int stock;
			cout << "Entrez un nom d'article : ";
			cin >> nom;
			cout << endl;
			cout << "Entrez un prix d'article : ";
			cin >> prix;
			cout << endl;
			cout << "Entrez son stock : ";
			cin >> stock;
			cout << endl;
			maGestion.ajoutArticle(nom, prix, stock);
			break;
		case 2:
			string nom2;
			cout << "Entrez le nom de votre article : ";
			cin >> nom2;
			cout << "Nom de votre article : " << maGestion.lireArticle(nom2)->getNom() << endl;
			cout << "Prix de votre article : " << maGestion.lireArticle(nom2)->prixHT << endl;
			cout << "Nombre d'articles : " << maGestion.lireArticle(nom2)->stock << endl;
			break;

		}

		cout << "Souhaitez vous recommencer une action ? 1 pour oui / 2 pour non";
		cout << endl << "Votre choix : ";
		cin >> restart;

		if (restart == 1)
		{
			loop = true;
		}
		else
		{
			loop = false;
		}


	} while (loop);




}


