#include <iostream>
#include <math.h>

using namespace std;

int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}



int main()
{

    int grille[100][1];

    cout << "Tableau pourcentage" << endl;
    int a;
    for(a=1;a<100;a++)
    {
      //  grille[a][0]=
       cout <<a<<"%: "<< a/(gcd(a,100)) <<" ";
       cout <<100/(gcd(a,100)) << "\n ";
        //grille[a][1]=

    }
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ ";

    for(a=1;a<100;a++)
    {
      //  grille[a][0]=
      for(int b=1;b<)

       cout <<a<<"%: "<< a/(gcd(a,100)) <<" ";
       cout <<100/(gcd(a,100)) << "\n ";


    }


    return 0;
}
