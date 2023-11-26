#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main() {

    setlocale(LC_ALL, "");   // pour gérer les accents et les caractères spéciaux

    srand(time(0));      // initialisation du générateur de nombres aléatoires

    int nombreMystere;
    int nombreUtilisateur;
    int compteur;
    char rejouer;

    do {
        nombreMystere = rand() % 100 + 1; // génération d'un nombre aléatoire entre 1 et 100
        compteur = 0;

        cout << "Devinez le nombre mystère entre 1 et 100." << endl;

        do {
            cout << "Entrez votre nombre: ";
            cin >> nombreUtilisateur;
            compteur++;

            if (nombreUtilisateur > nombreMystere)
                cout << "Votre nombre est supérieur au nombre mystère." << endl;

            else if (nombreUtilisateur < nombreMystere)
                cout << "Votre nombre est inférieur au nombre mystère." << endl;

        } while (nombreUtilisateur != nombreMystere);

        cout << "Bravo! Vous avez trouvé le nombre mystère en " << compteur << " tentatives." << endl;

        cout << "Voulez-vous rejouer (o (oui) /n (non))? ";
        cin >> rejouer;
    } while (rejouer == 'o' || rejouer == 'O' );

    cout << "By Tissiou_33" ;

    return 0;
}
#
