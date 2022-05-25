#include "Personne.h"
#include<map>

Personne::Personne(string nom, string prenom, string adresse, int age)
{
	this->nom = nom;
	this->prenom = prenom;
	this->adresse = adresse;
	this->age = age;

}

void Personne::afficher() const
{
	cout << "nom :" << this->nom << " prenom :" << this->prenom << " Adresse :" << this->adresse << " age :" << this->age << endl;
}

string Personne::Getnom()
{
	return this->nom;
}

int Personne::GetAge()
{
	return this->age;
}

bool Personne::operator<(Personne P) const
{
	return (this->age < P.age) ? true : false;
}

void Personne::supp() const
{
	
}


/*
pour trier du plus grand au plus petit
bool Personne::operator<(Personne P) const
{
	return (this->age < P.age) ? false : true;
}
*/
