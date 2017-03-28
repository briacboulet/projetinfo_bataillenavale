#include "Navire.hpp"
#include "Cuirasse.hpp"
#include "Croiseur.hpp"
#include "Destroyer.hpp"
#include "Sous_marin.hpp"
#include "Grille.hpp"

 Grille g;

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
    ///Instanciation de l'objet g de la classe Grille

    g.Allouer_grilles();
    g.Initialisation_grilles();


    ///Initialisation de la position des cuirasse
        /// Générer aléatoirement de l'orientation des différents types de navire
    srand(time(NULL));
    //bool orientation_c=1;
    bool orientation_c =rand()%2;
    bool orientation_x=rand()%2;
    bool orientation_d=rand()%2;
    bool orientation_s=rand()%2;

std::cout << orientation_c <<"orientation_c: "<<std:: endl;
std::cout << orientation_x <<"lorientation_x : "<<std::endl;
std::cout << orientation_d<<"orientation_d "<<std::endl;
std::cout << orientation_s<< " orientation_s "<<std::endl;

      /// Instanciation de chaque type de navire
    Cuirasse cuirasse( 7, orientation_c, 9, 1);
    Croiseur croiseur (5, orientation_x, 4, 2);

    /// Les lignes en commentaire ci dessous étaient des test afin de voir si nos variables ont été bien initialisées.
 /*
std::cout << cuirasse.m_long <<"CUIRASSE long : "<<std:: endl;
std::cout << cuirasse.m_long_moitie <<"long : "<<std:: endl;
std::cout << orientation_c <<"orient: "<< std::endl;
std::cout << cuirasse.m_rayonAttaque<<"att "<<std::endl;
std::cout << cuirasse.m_nb_navire<< "nb "<<std::endl;
    *//*
std::cout << croiseur.m_long <<"CROISEUR long : "<<std:: endl;
std::cout << croiseur.m_long_moitie <<"long : "<<std:: endl;
std::cout << orientation_x <<"orient: "<< std::endl;
std::cout << croiseur.m_rayonAttaque<<"att "<<std::endl;
std::cout << croiseur.m_nb_navire<< "nb "<<std::endl;
   Destroyer destroyer (3, orientation_x, 1, 3);
std::cout << destroyer.m_long <<"DESTROYER long : "<<std:: endl;
std::cout << destroyer.m_long_moitie <<"long : "<<std:: endl;
std::cout << orientation_d <<"orient: "<< std::endl;
std::cout << destroyer.m_rayonAttaque<<"att "<<std::endl;
std::cout << destroyer.m_nb_navire<< "nb "<<std::endl;
    Sous_marin sousmarin (1, orientation_x, 1, 4);
std::cout << sousmarin.m_long <<"ORIENTATION long : "<<std:: endl;
std::cout << sousmarin.m_long_moitie <<"long : "<<std:: endl;
std::cout << orientation_s <<"orient: "<< std::endl;
std::cout << sousmarin.m_rayonAttaque<<"att "<<std::endl;
std::cout << sousmarin.m_nb_navire<< "nb "<<std::endl;


/*std::cout << cuirasse.m_long <<"long : "<<std:: endl;
std::cout << cuirasse.m_long_moitie <<"long : "<<std:: endl;
std::cout << orientation <<"orient: "<< std::endl;
std::cout << cuirasse.m_rayonAttaque<<"att "<<std::endl;
std::cout << cuirasse.m_nb_navire<< "nb "<<std::endl;*/

    /// Déclaration du nombre de chaque type de nombre de navires
    int nb_cuirasse, nb_croiseur, nb_destroyer, nb_sousmarin= 0;
std::cout << nb_cuirasse <<nb_croiseur<<nb_destroyer<< nb_sousmarin<<"nb_cuirasse  croiseur  destroyer sous : "<<std:: endl;

    /// Positionnement aléatoire des navires
        ///Positionnement Cuirasse
    while( nb_cuirasse!=cuirasse.m_nb_navire){
std::cout << nb_cuirasse<<" while cuirasse"<<std:: endl;

       if (orientation_c==false)//vertical
       {
            int posX_rand= rand()% (14-(cuirasse.m_long_moitie*2)+1)+ cuirasse.m_long_moitie ;//générer un nombre compris entre 3 et 11 =>9 cases
            // bool posX=rand()%(11-3+1)+ 3//générer un nombre compris entre 3 et 11 car cuirassé
            int posY_rand= rand()% 15 ;////générer un nombre compris entre 0 et 15
            while(g.get_element_grille1(posX_rand, posY_rand)=='0')
           {
                for (int i=0; i<=cuirasse.m_long_moitie; i++) // marquer la case par le type de navire + long_moitie
                {
                   g.set_element_grille1( (posX_rand+i), posY_rand,'c');
                }
                 for (int i=1; i<=cuirasse.m_long_moitie; i++) // _ long moitiz
                {
                    g.set_element_grille1(posX_rand-i, posY_rand, 'c');
                }
            nb_cuirasse++;
           }

       }//fin if orientation

       else //       if (orientation==true)// horizontal
       {
           int posX_rand= rand()% 15; ////générer un nombre compris entre 0 et 15
           int posY_rand= rand()% (14-(cuirasse.m_long_moitie*2)+1)+ cuirasse.m_long_moitie;//générer un nombre compris entre 3 et 11
            while(g.get_element_grille1(posX_rand, posY_rand)=='0')
           {
                for (int j=0; j<=cuirasse.m_long_moitie; j++)
                {
                   g.set_element_grille1(posX_rand, posY_rand+j,'c');
                }
                 for (int j=1; j<=cuirasse.m_long_moitie; j++)
                {
                   g.set_element_grille1(posX_rand, posY_rand-j,'c');
                }
            nb_cuirasse++;
           }

       }//fin else


    }//fin while
           g.Afficher_grille();// verifier position croiseur


       ///Positionnement Croiseurs
 while( nb_croiseur!=croiseur.m_nb_navire){
std::cout << nb_croiseur<<" while croiseur"<<std:: endl;
       if (orientation_x==false)//vertical
       {
            int posX_rand= rand()% (14-(croiseur.m_long_moitie*2)+1)+ croiseur.m_long_moitie ;//générer un nombre compris entre 3 et 11 =>9 cases
            // bool posX=rand()%(11-3+1)+ 3//générer un nombre compris entre 3 et 11 car cuirassé
            int posY_rand= rand()% 15 ;////générer un nombre compris entre 0 et 15
            while(g.get_element_grille1(posX_rand, posY_rand)=='0')
           {
                for (int i=0; i<=croiseur.m_long_moitie; i++) // marquer la case par le type de navire + long_moitie
                {
                   g.set_element_grille1( (posX_rand+i), posY_rand,'x');
                }
                 for (int i=1; i<=croiseur.m_long_moitie; i++) // _ long moitiz
                {
                    g.set_element_grille1(posX_rand-i, posY_rand, 'x');
                }
            nb_croiseur++;
           }

       }//fin if orientation

       else //       if (orientation==true)// horizontal
       {
           int posX_rand= rand()% 15; ////générer un nombre compris entre 0 et 15
           int posY_rand= rand()% (14-(croiseur.m_long_moitie*2)+1)+ croiseur.m_long_moitie;//générer un nombre compris entre 3 et 11
            while(g.get_element_grille1(posX_rand, posY_rand)=='0')
           {
                for (int j=0; j<=croiseur.m_long_moitie; j++)
                {
                   g.set_element_grille1(posX_rand, posY_rand+j,'x');
                }
                 for (int j=1; j<=croiseur.m_long_moitie; j++)
                {
                   g.set_element_grille1(posX_rand, posY_rand-j,'x');
                }
            nb_croiseur++;
           }

       }//fin else

    }// fin while

    g.Afficher_grille();


        ///Positionnement Destroyers



        ///Positionnement Sousmarins



    ///Affichage grille1


}


void Navire::Action()
{
    int choix = 0;
    while (choix < 1 || choix > 5)
    {
    std::cout << "Entrer le choix d'action que vous voulez effecturer:\n";
    std::cout << "1. Tirer\n";
    std::cout << "2. Deplacer\n";
    std::cout << "3. Rotation\n";
    std::cout << "4. Sauvegarder et quitter\n";
    std::cin >> choix;
    }

    if (choix == 1)
    {
        Tirer();
    }
    if (choix ==2)
    {
        // deplacement;
    }
    if (choix ==3)
    {
        // rotation
    }
    if (choix ==4)
    {
        // g.sauvegarder
        // system("exit");
    }


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

 void Navire::Tirer(){
     int choix1;
     int choix2;
     std::cout << "Entrer l'ordonnée de la case";
     std::cin >> choix1;
     std::cout << "Entrer l'abscisse de la case";
     std::cin >> choix2;
     g.set_element_grille2tirer(choix1,choix2, 't');
     system("cls");
     g.Afficher_grille();


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


