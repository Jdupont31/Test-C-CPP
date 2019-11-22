#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
        ofstream fichier("test.txt", ios::out | ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert

        if(fichier)
        {
                string nom = "var";
                int var = 0;
                for(var;var<10200;var++)
                {
                            fichier << "" << var << endl;;
                }
                fichier.close();

                cout << "Traitement ok";

        }
        else
                cerr << "Impossible d'ouvrir le fichier !" << endl;

}
