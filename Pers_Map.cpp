// Pers_Map.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Personne.h"
#include<map>

int main()
{
	Personne p("Khafife", "Jad", "hna", 21);
	Personne p1("Karam", "Youssef", "Lhih", 29);
	Personne p2("Belkadi", "Hajar", "Honak", 40);

	map<string, Personne> mp;
	mp.insert({ p.Getnom(), p });
	mp.insert({ p1.Getnom(), p1 });
	mp.insert({ p2.Getnom(), p2 });

	for (auto el : mp) {
		el.second.afficher();
	}

	cout << "Multimap" << endl;

	multimap<Personne, int> multi;

	multi.insert({ p, p.GetAge() });
	multi.insert({ p1, p1.GetAge() });
	multi.insert({ p2, p2.GetAge() });

	for (auto el2: multi) {
		el2.first.afficher();
	}

	multimap<Personne, int>::iterator it;
	for (it = multi.begin();it != multi.end();it++) {
		if ((*it).second > 23) {
			multi.erase(it);
		}
	}

	for (auto el2 : multi) {
		el2.first.afficher();
	}
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
