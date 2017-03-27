#include "Navire.hpp"
#include "Cuirasse.hpp"
#include "Grille.hpp"


    /// Constructeurs ///


/// Constructeurs PAR DEFAUT
Navire::Navire()

{

}
/*/// Constructeurs PAR DEFAUT
Navire::Navire()
          : m_pos_X(0), m_pos_Y(0)
{
    /// Rien à faire
}*/

/// Constructeurs PAR COPIE
/*Navire::Navire(Navire const& copy)
{
	m_pos_X = copy.m_pos_X;
	m_pos_Y = copy.m_pos_Y;
}*/

/// Constructeurs SURCHARGE'
Navire::Navire(int _long, bool _orientation, int _rayonAttaque, int _nb_navire)
       : m_long(_long), m_orientation(_orientation), m_rayonAttaque( _rayonAttaque), m_nb_navire(_nb_navire)
{
   m_long_moitie = ((m_long+1)/2)-1;
}
      /// Destructeur ///
Navire::~Navire()
{
    /// Rien à faire
    /// Rien à libèrer
}

        /// Méthodes ///
void Navire::Positionnement_Navires()
{

    Grille g;
  // std::vector<std::vector<char>> matrice = g.get_grille1();
    srand(time(NULL));
    bool orientation=0;//bool orientation =rand()%2;
    Cuirasse cuirasse( 7, orientation, 9, 1);
std::    cout << cuirasse.m_long <<"long : "<<std:: endl;
std::  cout << cuirasse.m_long_moitie <<"long : "<<std:: endl;
 std:: cout << orientation <<"orient: "<< std::endl;
 std::cout << cuirasse.m_rayonAttaque<<"att "<<std::endl;
std::cout << cuirasse.m_nb_navire<< "nb "<<std::endl;//*/
    int nb_navire =0; //, nb_croiseur, nb_destroyer, nb_sousmarin

    ///Initialisation cuirasse
    while( nb_navire!=cuirasse.m_nb_navire){
std::  cout << cuirasse.m_long_moitie <<"long while : "<<std:: endl;
std:: cout << orientation <<"orient: "<< std::endl;
       if (orientation==false)//horizontal
       {
           std::  cout << cuirasse.m_long_moitie <<"long false : "<<std:: endl;
            int posX_rand= rand()% (14-(cuirasse.m_long_moitie*2)+1)+ cuirasse.m_long_moitie ;//générer un nombre compris entre 3 et 11 =>9 cases
            // bool posX=rand()%(11-3+1)+ 3//générer un nombre compris entre 3 et 11 car cuirassé
             std::  cout << cuirasse.m_long_moitie<<"    "<<posX_rand <<"long falseX : "<<std:: endl;

            int posY_rand= rand()% 15 ;////générer un nombre compris entre 0 et 15
             std::  cout << cuirasse.m_long_moitie <<"long falseY: "<<std:: endl;
            std::  cout << g.get_element_grille1(3,10)<<"long false el: "<<std:: endl;
            while(g.get_element_grille1(posX_rand, posY_rand)=='0')
           {
               std::  cout << cuirasse.m_long_moitie <<"long while2: "<<std:: endl;
                for (int i=0; i<cuirasse.m_long_moitie; i++)
                {
                    std::  cout << cuirasse.m_long_moitie <<"long for1: "<<std:: endl;
                   //g.set_element_grille1( (posX_rand+i), posY_rand,'c');
                }
                 for (int i=0; i<cuirasse.m_long_moitie; i++)
                {
                    std::  cout << cuirasse.m_long_moitie <<"long for2: "<<std:: endl;
                    //g.set_element_grille1(posX_rand-i, posY_rand, 'c');
                }

           }
           nb_navire++;
       }
      /* else //orientation=true verticale
       {
           int posX_rand= rand()% 15; ////générer un nombre compris entre 0 et 15
           int posY_rand= rand()% (14-(cuirasse.m_long_moitie*2)+1)+ cuirasse.m_long_moitie;//générer un nombre compris entre 3 et 11
            Grille g;
            while(g.get_element_grille1(posX_rand, posY_rand)=='0')
           {
                for (int j=0; j<cuirasse.m_long_moitie; j++)
                {
                   // g.set_element_grille1(posX_rand, posY_rand+j,'c');
                }
                 for (int j=0; j<cuirasse.m_long_moitie; j++)
                {
                   //g.set_element_grille1(posX_rand, posY_rand-j,'c');
                }

           }
           nb_navire++;
       }
*/

    }

    ///Initialisation croiseurs

    ///Initialisation destroyeurs

    ///Initialisation sous-marins


    ///Affichage grille1


}

bool Navire::Deplacer(std::vector<std::vector<char> > m_grille1)
{


    /*bool dplcmt=false;
    char touch;

    switch(touch)
    {
                case 'Z': //déplacer une case vers le haut

                    break;
                case 'Q': //déplacer une case vers la gauche
                    break;

                case 'D': //déplacer une case vers la droite

                    break;
                case 'W': //déplacer une case vers le bas

                    break;
                case 'O': //déplacement orientation horizontal/vertical

                    break;




    }
    return dplcmt;
*/}

 void Tirer(char a){
 }


        /// Getters et Setters
/// Getters
int Navire::getPos_X() const
{
    return m_pos_X;
}

int Navire::getPos_Y() const
{
    return m_pos_Y;
}

int Navire::getlong() const
{
    return m_long;
}

int Navire::getrayonAttaque() const
{
    return m_rayonAttaque;
}

bool Navire::getorientation() const
{
    return m_orientation;
}

int Navire::getlong_moitie() const
{
    return m_long_moitie;
}

int Navire::getnb_navire() const
{
    return m_nb_navire;
}

/// Setters
void Navire::setPos_X(int x)
{
 //Blindage
 if ((x>=0) && (x<=14) )
 {
     m_pos_X=x;
 }
}
 void Navire::setPos_Y(int y)
{
 //Blindage
    if ((y>=0)&&(y<=14))
    {
     m_pos_Y=y;
    }

}


