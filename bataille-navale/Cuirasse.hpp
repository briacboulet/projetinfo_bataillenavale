#ifndef CUIRASSE_HPP_INCLUDED
#define CUIRASSE_HPP_INCLUDED
#include "Navire.hpp"

class Cuirasse : public Navire
{
    public:
    /// Constructeurs
        ///Constructeur PAR DEFAUT
        Cuirasse();

	/// Constructeur SURCHARGE'
        Cuirasse(int _long, bool _orientation, int _rayonAttaque, int _nb_navire);

    /// Destructeur
        ~Cuirasse();

    /// Méthodes




};


#endif // CUIRASSE_HPP_INCLUDED
