#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Individu
{
private:
	string numSecu;
	string nom;
	string prenom;
	int jour_naissance;
	int mois_naissance;
	int annee_naissance;
	string profession;

public:
	
	Individu(string monNumSecu, string monNom, string monPrenom, int monJourNaissance, int monMoisNaissance, int monAnneeNaissance, string maProfession);
	~Individu();

	string getNumSecu() const
	{
		return numSecu;
	};

	string getNom() const
	{
		return nom;
	};

	string getPrenom() const
	{
		return prenom;
	};

	string getProfession() const
	{
		return profession;
	};

	string getDateNaissance()
	{
		string dateNaissance = to_string(jour_naissance) + "/" + to_string(mois_naissance) + "/" + to_string(annee_naissance);
		return dateNaissance;
	};

	string getIndividu() const;

	
	void setProfession(const string maProfession)
	{
		profession = maProfession;
	};

	void afficheIndividu() const;

};

