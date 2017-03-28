#ifndef DESTROYER_HPP_INCLUDED
#define DESTROYER_HPP_INCLUDED
#include "Navire.hpp"


class Destroyer: public Navire{
    public:
    /// Constructeurs
        ///Constructeur PAR DEFAUT
        Destroyer();

	/// Constructeur SURCHARGE'
        Destroyer(int _long, bool _orientation, int _rayonAttaque, int _nb_navire);

    /// Destructeur
        ~Destroyer();

    /// Méthodes

};

#endif // DESTROYER_HPP_INCLUDED
