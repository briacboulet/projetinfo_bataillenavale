#include "Grille.hpp"
    /// Constructeurs ///

/// Constructeurs PAR DEFAUT
Grille::Grille()
          : m_grille1()
{
    /// Rien à faire
}

/// Constructeurs PAR COPIE
Grille::Grille(Grille const& copy)
{
	m_grille1 = copy.m_grille1;

}

/// Constructeurs SURCHARGE'
/*Grille::Grille(std::vector<std::vector<char> > _grille1)
          : m_grille1(_grille1)
{
    /// Rien à faire
}*/
        /// Destructeur ///
Grille::~Grille()
{
    /// Rien à faire
    /// Rien à libèrer
}

        /// Méthodes ///
void Afficher_grille(){
}

void Clear(){
}
void PlacerNavire(){
}


        /// Getters et Setters
/// Getters
std::vector<std::vector<char> >Grille::get_grille1() const
{
    return m_grille1;
}

std::vector<std::vector<char> >Grille::get_grille2() const
{
    return m_grille2;
}

/// Setters
/*void Grille::set_grille1(int grille1)
{

}
void Grille::set_grille2(int grille2)
{

}
*/
