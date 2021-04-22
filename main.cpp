#include <iostream>

using namespace std;

void loop();
void Verificacion();
void Imagen();
void Publik();

int main() {
    loop();

    return 0;
}

void loop() {

    int Matriz[8][8] = {};
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            Matriz[i][j] = 0;
            cout << Matriz[i][j] << " ";
        }
        cout << endl;
    }

    int menu;
    cout << "\nElija una opcion:\n"
            "1 > Verificacion.\n"
            "2 > Imagen.\n"
            "3 > Publik." << endl;
    cin >> menu;
    cout << endl;

    if (menu == 1) {
        Verificacion();
        cout << endl;
    }
    else if (menu == 2) {
        Imagen();
        cout << endl;
    }
    else if (menu == 3) {
        Publik();
        cout << endl;
    }
}

void Verificacion() {
    int M[8][8] = {};                   //M[8][8] -> Matriz 8x8
    for (int i=0; i<8; i++) {           //Crea los 8 subarreglos (filas)
        for (int j=0; j<8; j++) {   	//Pone 8 elementos en cada subarreglo (columnas)
            M[i][j] = 1;              	//Cada elemento es igual a 1
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

}

void Imagen(){
    int led, res;
    int M[8][8] = {};
    for (int i=0; i<8; i++) {
        cin >> led;
        for (int j=0; j<8; j++) {
            res = led%10;
            led = led/10;
            M[i][j] = res;
        }
    }
    cout << endl;
    for (int i=0; i<8; i++) {
        for (int j=7; j>=0; j--) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void Publik() {

}
