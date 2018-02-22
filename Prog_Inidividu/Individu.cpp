#include "stdafx.h"
#include "Individu.h"
#include <iostream>



Individu::Individu(string monNumSecu, string monNom, string monPrenom, int monJourNaissance, int monMoisNaissance, int monAnneeNaissance, string maProfession) : numSecu(monNumSecu), nom(monNom), prenom(monPrenom), jour_naissance(monJourNaissance), mois_naissance(monMoisNaissance), annee_naissance(monAnneeNaissance), profession(maProfession)
{

}

Individu::~Individu()
{
}

string Individu::getIndividu() const
{
	string monIndividu = "Nom : " + nom + "\nPrenom : " + prenom + "\nNumero de secu : " + numSecu + "\nProfession : " + profession + "\nDate de naissance : " + to_string(jour_naissance) + '/' + to_string(mois_naissance) + '/' + to_string(annee_naissance) + "\n";
	return string(monIndividu);
}

void Individu::afficheIndividu() const
{
	cout << "Nom : " << nom << "\nPrenom : " << prenom << "\nNumero de secu : " << numSecu << "\nProfession : " << profession << "\nDate de naissance : " << jour_naissance << "/" << mois_naissance << "/" << annee_naissance << endl;
}
