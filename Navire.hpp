#ifndef NAVIRE_HPP_INCLUDED
#define NAVIRE_HPP_INCLUDED
#include <iostream>
#include <vector>


class Navire
{
    private: //can't be modified
    /// Attributs
	int m_pos_X;
	int m_pos_Y;
    int m_long_moitie;
    int m_nb_navire;

    protected:// can be modified
    int m_long;
	bool m_orientation; //false=horizontal / true=vertical
    int m_rayonAttaque;



    public:
    /// Constructeurs
        ///Constructeur PAR DEFAUT
       Navire();
        /// Constructeur PAR COPIE
   // Navire(Navire const& copy);
	/// Constructeur SURCHARGE'
   Navire(int _long, bool _orientation, int _rayonAttaque, int nb_navire);
    /// Destructeur
        ~Navire();

    /// Méthodes
    void Positionnement_Navires();
    bool Deplacer(std::vector<std::vector<char> > a);
    void Tirer(char a);



      /// Getter et Setter
        /// Getter
            int getlong() const;
            bool getorientation() const;
            int getrayonAttaque() const;
            int getlong_moitie() const;
            int getnb_navire() const;
            int getPos_X() const;
            int getPos_Y() const;

        /// Setter
            void setPos_X(int x);
            void setPos_Y(int y);

};



#endif // NAVIRE_HPP_INCLUDED
