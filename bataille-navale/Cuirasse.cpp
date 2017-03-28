#include "Cuirasse.hpp"


    ///Constructeur PAR DEFAUT
Cuirasse::~Cuirasse()
{

}


	/// Constructeur SURCHARGE'
Cuirasse::Cuirasse( int _long , bool  _orientation , int _rayonAttaque, int _nb_navire )

         : Navire (_long, _orientation, _rayonAttaque, _nb_navire)
{

}


