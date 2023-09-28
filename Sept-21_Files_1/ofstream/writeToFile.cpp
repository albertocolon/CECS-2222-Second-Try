// A2-d Archivos (Files) -> Escritura -> Write
// From the professor's annotations

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    double numero;
    int cantidad;

    file.open("numeros.txt");
    if (file.fail())
        cout << "ERROR: No se pudo abrir el archivo" << "numeros.txt" << endl;

    else
    {
        cout << "Cuantos números guardará en el archivo: ";
        cin >> cantidad;

        for (int i = 1; i <= cantidad; i++)
        {
            cout << "Entre cualquier número: ";
            cin >> numero;
            file << numero << endl;
        }

    file.close();
    }

    return (0);
}