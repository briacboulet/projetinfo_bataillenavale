#ifndef GRILLE_HPP_INCLUDED
#define GRILLE_HPP_INCLUDED
#include <iostream>
#include <vector>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
#include<stdlib.h>
#include <windows.h>

class Grille
{
    private:
    /// Attributs
	std::vector<std::vector<char> > m_grille1;
	std::vector<std::vector<char> >m_grille2;


    public:
    /// Constructeurs
        ///Constructeur PAR DEFAUT
        Grille();
        /// Constructeur PAR COPIE
        Grille(Grille const& copy);
	/// Constructeur SURCHARGE'
        Grille (std::vector<std::vector<char> >m_grille1, std::vector<std::vector<char> >_grille2);
    /// Destructeur
        ~Grille();

    /// Méthodes
        void gotoLigCol(int lig, int col);
        void Afficher_grille();
        void Allouer_grilles();
        void Initialisation_grilles();//tout à false puis remettre à 1 si navires

        void Clear();
        void PlacerNavire();

    /// Getter et Setter
        /// Getter
            std::vector<std::vector<char> >  get_grille1() const;
            std::vector<std::vector<char> >get_grille2() const;
            char get_element_grille1(int a, int b) const;
        ///Setter
         void set_element_grille1(int a, int b, char c);


         void set_element_grille2tirer(int a, int b, char c);

};


#endif // GRILLE_HPP_INCLUDED
