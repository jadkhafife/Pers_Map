#pragma once
#include<iostream>
using namespace std;

class Personne {
private:
	string nom;
	string prenom;
	string adresse;
	int age;
public:
	Personne(string nom, string prenom, string adresse, int age);
	void afficher() const;
	string Getnom();
	int GetAge();
	bool operator<(Personne P) const;
	void supp()const;
};