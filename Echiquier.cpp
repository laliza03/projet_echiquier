#include "Echiquier.hpp"
#include "cppitertools/range.hpp"

using namespace std;
using namespace iter;

Echiquier::Echiquier()
{
	vector<vector<Case>> echiquier(8, vector<Case>(8));
    for (int i : range (8)) {
        for (int j : range (8)) {
            if ((i + j) % 2 == 0) {
                echiquier[i][j] = '#';
            }
            else {
                echiquier[i][j] = ' ';
            }
        }
    }

	for (int i : range(8)) {
		for (int j : range(8)) {
			matriceCases[i][j] = Case();
		}
	}
}


    vector<vector<char>> echiquier(8, vector<char>(8)); // Crée un vecteur de 8x8 contenant des caractères

    // Initialise les cases de l'échiquier
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                echiquier[i][j] = '#';
            }
            else {
                echiquier[i][j] = ' ';
            }
        }
    }

    // Affiche l'échiquier
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << echiquier[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}



vector<T> v(n, constructeurDeT())

vector<vector<T>> v(n, (n, constructeurDeT()))