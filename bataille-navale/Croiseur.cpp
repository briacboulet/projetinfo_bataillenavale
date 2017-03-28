#include "Croiseur.hpp"


    ///Constructeur PAR DEFAUT
Croiseur::~Croiseur()
{

}


	/// Constructeur SURCHARGE'
Croiseur::Croiseur( int _long , bool  _orientation , int _rayonAttaque, int _nb_navire )

         : Navire (_long, _orientation, _rayonAttaque, _nb_navire)
{

}




