#ifndef NAVIRE_HPP_INCLUDED
#define NAVIRE_HPP_INCLUDED
#include <iostream>
#include <vector>


class Navire
{
    private:
    /// Attributs
	int m_pos_X;
	int m_pos_Y;


    public:
    /// Constructeurs
        ///Constructeur PAR DEFAUT
        Navire();
        /// Constructeur PAR COPIE
    Navire(Navire const& copy);
	/// Constructeur SURCHARGE'
        Navire(int _pos_X, int _pos_Y);
    /// Destructeur
        ~Navire();

    /// Méthodes
    void Initialisation();
   // bool position();
    bool Deplacer(std::vector<std::vector<char> > a);
    void Tirer(char a);


    /// Getter et Setter
        /// Getter
            int getPos_X() const;
            int getPos_Y() const;

        /// Setter
            void setPos_X(int x);
            void setPos_Y(int y);

};



#endif // NAVIRE_HPP_INCLUDED
