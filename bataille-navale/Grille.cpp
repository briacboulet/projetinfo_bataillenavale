#include "Grille.hpp"
#include "Cuirasse.hpp"
    /// Constructeurs ///

/// Constructeurs PAR DEFAUT
Grille::Grille()
          : m_grille1()
{
    /// Rien à faire
}

/// Constructeurs PAR COPIE
Grille::Grille(Grille const& copy)
{
	m_grille1 = copy.m_grille1;

}

/// Constructeurs SURCHARGE'
/*Grille::Grille(std::vector<std::vector<char> > _grille1)
          : m_grille1(_grille1)
{
    /// Rien à faire
}*/
        /// Destructeur ///
Grille::~Grille()
{
    /// Rien à faire
    /// Rien à libèrer
}

        /// Méthodes ///
void Grille::gotoLigCol(int lig, int col)
{
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

void Grille::Afficher_grille(){
   char c='A';
    std::cout<< "  1   2   3   4   5   6   7   8   9   10   11   12   13   14   15"<<std::endl;
    for(int i=0; i<=14; i++)
    {
        std::cout<<c;
        c=c+1;
        std::cout<< "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |"<< std::endl;
    }

    for (int i=0; i< 15; i++)
    {
        for (int j=0; j< 15; j++)
        {
            std::cout << m_grille1[i][j] << " ";
        }
        std::cout << std::endl;
    }
 }
void Grille::Allouer_grilles(){

    m_grille1.resize(15);
    for (int i=0; i<15; i++)
    {
       m_grille1[i].resize(15);
    }

     m_grille2.resize(15);
    for (int i=0; i<15; i++)
    {
       m_grille2[i].resize(15);
    }
}

void Grille::Initialisation_grilles(){
for (int i=0; i < 15 ; i++)
        {
            for  (int j=0; j < 15; j++)
            {
                m_grille1[i][j]='0';
                m_grille2[i][j]='0';
            }
        }
}



void Clear(){
}
void Grille::PlacerNavire(){

}


        /// Getters et Setters
/// Getters
std::vector<std::vector<char> >Grille::get_grille1() const
{
    return m_grille1;
}

char Grille::get_element_grille1(int a, int b) const
{
    return m_grille1[a][b];
}

/*
std::vector<std::vector<char> >Grille::get_grille2() const
{
    return m_grille2;
}
*/
/// Setters

void Grille::set_element_grille1(int a, int b, char c)
{
    m_grille1[a][b]=c;
}


void Grille::set_element_grille2tirer(int a, int b, char c)
{

    m_grille1[a][b]= c;

}
/*void Grille::set_grille1(int grille1)
{

}
void Grille::set_grille2(int grille2)
{

}
*/
