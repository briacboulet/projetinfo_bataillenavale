#ifndef CROISEUR_HPP_INCLUDED
#define CROISEUR_HPP_INCLUDED
#include "Navire.hpp"


class Croiseur : public Navire
{
    public:
    /// Constructeurs
        ///Constructeur PAR DEFAUT
        Croiseur();

	/// Constructeur SURCHARGE'
        Croiseur(int _long, bool _orientation, int _rayonAttaque, int _nb_navire);

    /// Destructeur
        ~Croiseur();

    /// Méthodes


};


#endif // CROISEUR_HPP_INCLUDED

