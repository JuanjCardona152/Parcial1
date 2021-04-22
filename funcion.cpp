#include <iostream>

using namespace std;

int main()
{
    int nTerminos; cout << "carcateres a ingresar= ";   cin >> nTerminos; int cont = 1;
    int arregloFnal [nTerminos][64]= {0};
    for (int j = 0; j < nTerminos; j++){
    for (int i = 0; i < 64 ; i++){
        if (i== 0||i == 8 || i == 16 || i == 24 || i == 32 || i ==40 || i== 48){
            cout << "---------- linea" << cont << " ---------"<< endl;
                    cont+=1;
        }
        cout << "ingrese 1 prender led o 0 para led apagado "; int ingreso ; cin >> ingreso;
        arregloFnal [j][i]=ingreso;

        }

    cout << "----------siguiente patron ---------"<< endl;
    cont=0;
}

    for (int l =0 ; l < nTerminos; l++){

        for (int b = 0; b < 64 ; b++){
            if (b == 8 || b == 16 || b == 24 || b == 32 || b ==40 || b== 48){
                cout << endl;
            }
            cout << arregloFnal [l][b];

            }
        }
return 0;
    }
