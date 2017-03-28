#ifndef SOUS-MARIN_HPP_INCLUDED
#define SOUS-MARIN_HPP_INCLUDED
#include "Navire.hpp"

class Sous_marin : public Navire
{
    public:
    /// Constructeurs
        ///Constructeur PAR DEFAUT
        Sous_marin();

	/// Constructeur SURCHARGE'
        Sous_marin(int _long, bool _orientation, int _rayonAttaque, int _nb_navire);

    /// Destructeur
        ~Sous_marin();

    /// Méthodes




};



#endif // SOUS-MARIN_HPP_INCLUDED
