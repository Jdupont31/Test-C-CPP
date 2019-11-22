#include <iostream>

using namespace std;

char grille[2][2];
void afficher(char grille);


int main()
{


     for(int i=0; i < 3; i++)
        {
            for (int j=0; j < 3; j++)
            {
                grille[i][j] = 6;
                cout <<"Grille i="<<i<<" j="<<j<<" Valeur de la grille: " << grille[i][j] <<"\n"<<endl;

            }
            int j=0;
        }


    afficher(grille[0][0]);

    return 0;
}


void afficher(char grille[2][2])
{
        cout << "-------\n"<< grille[0][0]<<grille[1][0]<<  grille[2][0] <<"\n\n\n-------"<< endl;
        cout << "Morpion" << endl;


}
