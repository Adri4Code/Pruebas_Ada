#include <iostream>

using namespace std;

/*
int recortar (int imgO , int imgD, int cI, int fI, int w, int h){

        int dirOrig = imgO;
        int dirDest = imgD;
        dirOrig = dirOrig + fI*320+cI;
        int despFila = (240­h)/2;
        int despColum = (320­w)/2;
        for (int f=0; f<240; f++){
            if (f>=despFila && 240­f>despFila){
                for(int c=0; c<320; c++){
                    if (c>=despColum && 320­c>despColum)
                    {
                        [dirDest]=[dirOrig];
                        dirOrig++;
                    }
                    else
                    [dirDest]=0;
                    dirDest++;
                }
                dirOrig = dirOrig + despColum*2;
            }
            else{
                    for (int c=0; c<320; c++){
                        [dirDest]=0;
                        dirDest++;
                    }
            }
        }
    }
*/
int modulo(int a, int b) {
    int c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    if (b == 1) {
        return a;
    } else {
        c = modulo(a, b / 2);
        cout << "Llamada recursiva" << endl;
        if (b % 2 == 0) {
            return a * c * c;
            cout << "segundo condicional" << endl;
        }
        else return c * c;
        cout << "Finalizacion" << endl;
    }
}

int main() {
    int x;

    x = modulo(4, 2);
    cout << "Resultado:" << x << endl;
    return 0;
}