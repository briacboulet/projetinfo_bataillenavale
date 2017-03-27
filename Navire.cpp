#include "Navire.hpp"
#include "Grille.hpp"


    /// Constructeurs ///

/// Constructeurs PAR DEFAUT
Navire::Navire()
          : m_pos_X(0), m_pos_Y(0)
{
    /// Rien à faire
}

/// Constructeurs PAR COPIE
Navire::Navire(Navire const& copy)
{
	m_pos_X = copy.m_pos_X;
	m_pos_Y = copy.m_pos_Y;
}

/// Constructeurs SURCHARGE'
Navire::Navire(int _pos_X, int _pos_Y)
          : m_pos_X(_pos_X), m_pos_Y(_pos_Y)
{
    /// Rien à faire
}
        /// Destructeur ///
Navire::~Navire()
{
    /// Rien à faire
    /// Rien à libèrer
}

        /// Méthodes ///
void Navire::Initialisation()
{

}

bool Navire::Deplacer(std::vector<std::vector<char> > m_grille1)
{


    bool dplcmt=false;
    char touch;

    switch(touch)
    {
                case 'Z': //déplacer une case vers le haut

                    break;
                case 'Q': //déplacer une case vers la gauche
                    break;

                case 'D': //déplacer une case vers la droite

                    break;
                case 'W': //déplacer une case vers le bas

                    break;
                case 'O': //déplacement orientation horizontal/vertical

                    break;




    }
    return dplcmt;
}

 void Tirer(char a){
 }


        /// Getters et Setters
/// Getters
int Navire::getPos_X() const
{
    return m_pos_X;
}

int Navire::getPos_Y() const
{
    return m_pos_Y;
}

/// Setters
void Navire::setPos_X(int x)
{
 //Blindage
 if ((x>=0) && (x<=14) )
 {
     m_pos_X=x;
 }
}
 void Navire::setPos_Y(int y)
{
 //Blindage
    if ((y>=0)&&(y<=14))
    {
     m_pos_Y=y;
    }

}


