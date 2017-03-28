#include "Destroyer.hpp"


    ///Constructeur PAR DEFAUT
Destroyer::Destroyer()
{

}


	/// Constructeur SURCHARGE'
Destroyer::Destroyer( int _long , bool  _orientation , int _rayonAttaque, int _nb_navire )

         : Navire (_long, _orientation, _rayonAttaque, _nb_navire)
{

}

    /// Destructeur
Destroyer::~Destroyer()
{

}

