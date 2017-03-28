#include <iostream>
#include "Grille.hpp"
#include "Navire.hpp"
#include "Cuirasse.hpp"

using namespace std;

int main()
{
    int abc;  // variable pour le choix
    while (abc < 1 || abc > 4)
    {

    cout << "====== Bataille navale ======\n\n" << endl;
    cout << "1. Lancer une partie\n";
    cout << "2. Charger une partie\n";
    cout << "3. Aide\n";
    cout << "4. Quitter\n\n\n Entrer votre choix";
    cin  >> abc;
    }
Grille g;

  if (abc == 1)
  {


    system("cls");
    g.Allouer_grilles();
    g.Initialisation_grilles();
    g.Afficher_grille();
    Navire n;
    Cuirasse c( 7, 0, 9, 1);
        cout << c.getlong() <<"long : "<< endl;
        cout << c.getlong_moitie() <<"long : "<< endl;
        cout << c.getorientation() <<"orient: "<< endl;
        cout << c.getrayonAttaque()<<"att "<<endl;
        cout << c.getnb_navire()<< "nb "<<endl;//*/
     n.Positionnement_Navires();
     n.Action();


}

  if (abc == 2)
  {
      // méthode de chargement de partie
  }


  if (abc == 3)
  {
      // aide ici
  }

  if (abc == 4)
  {
      system("exit");
  }
//*

    //Console* pConsole = NULL;
    //pConsole = Console::getInstance();


//n.Positionnement_Navires();

//g.Afficher_grille();



//    /*

//g.PlacerNavire();

    //int typeclear;
    //cin >> typeclear;
    //pConsole::clearconsole(typeclear)
//    clearconsole(2);
    return 0;
}
