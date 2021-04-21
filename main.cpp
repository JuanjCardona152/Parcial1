#include <iostream>

using namespace std;

int main()
{
    int res, menu;
    new (int (*[10])());

    int numeros[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0}};

    cout << "Ingrese 1 para verificar si los leds funcionan." << endl;
    cout << "Ingrese 2 para ingresar un patrón." << endl;
    cout << "Ingrese 3 para ingresar varios patrones." << endl;
    cin >> menu;

    if (menu==1) {
        for (int i=0; i<8; i++) {
            for (int j=0; j<8; j++) {
                numeros[i][j] = 1;
                cout << numeros[i][j] << ' ';
            }
            cout << endl;
        }
    }
    /*for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            cout << *(*(numeros+i)+j) << " ";
        }
        cout << endl;
    }*/

    return 0;
}
