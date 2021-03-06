// Prog_Inidividu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Individu.h"
#include <iostream>
#include <fstream>


int main()
{
	//DECLARATION
	Individu monIndividu1("1 95 08 68 066 495 36", "Mure", "Lucas", 21, 8, 1995, "Etudiant");
	Individu monIndividu2("2 95 09 68 066 495 36", "Fernandes", "Megane", 29, 9, 1995, "Etudiante");

	//CHANGE PROFESSION INDIVIDU 1
	monIndividu1.setProfession("Service Civique");
	
	//AFFICHE LES INDIVIDUS
	//monIndividu1.afficheIndividu();
	//monIndividu2.afficheIndividu();
	
	//OUVERTURE D'UN FICHIER
	fstream fichier("test.txt", ios::out | ios::in | ios::app | ios::ate);  //déclaration du flux et ouverture du fichier
	//TEST:
	//ofstream fichier("test.txt", ios::out | ios::trunc);  //déclaration du flux et ouverture du fichier
	
	if (fichier) //Si l'ouverture a réussi
	{
		//instructions
		//ECRITURE DANS LE FICHIER 
		fichier << monIndividu1.getIndividu();
		fichier << monIndividu2.getIndividu();
		//fichier.clear();
		fichier.close(); //fermeture du fichier
		cout << "Ecriture OK o/" << endl;
	}
	else
	{
		cerr << "Erreur lors de l'ouverture du fichier !" << endl;
	}


	//RECHERCHE D'UN ELEMENT DANS LE FICHIER ET RESSORT LA LIGNE
	string rechercheNom = "";
	while (rechercheNom != "exit")
	{
		cout << "Veuillez entrer un nom a rechercher ou ecrire exit pour sortir du programme\n";
		cin >> rechercheNom;

		ifstream fichier2("test.txt", ios::in);

		if (fichier2)
		{
			string ligne;
			while (getline(fichier2, ligne)) // tant que l'on peut mettre la ligne dans "contenu"
			{
				if (ligne.find(rechercheNom) != string::npos)
				{
					cout << ligne << endl; //on affiche la ligne

				}
			}
		}
	}

	//test

	system("pause");
    return 0;
}

