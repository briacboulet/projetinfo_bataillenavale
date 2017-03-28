#include "Sous_marin.hpp"


   ///Constructeur PAR DEFAUT
Sous_marin::~Sous_marin()
{

}


	/// Constructeur SURCHARGE'
Sous_marin::Sous_marin( int _long , bool  _orientation , int _rayonAttaque, int _nb_navire )

         : Navire (_long, _orientation, _rayonAttaque, _nb_navire)
{

}


