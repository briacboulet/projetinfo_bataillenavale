#ifndef GRILLE_HPP_INCLUDED
#define GRILLE_HPP_INCLUDED
#include <iostream>
#include <vector>

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
        void Afficher_grille();
        void Clear();
       // void PlacerNavire();

    /// Getter et Setter
        /// Getter
            std::vector<std::vector<char> >  get_grille1() const;
            std::vector<std::vector<char> >get_grille2() const;


};


#endif // GRILLE_HPP_INCLUDED
