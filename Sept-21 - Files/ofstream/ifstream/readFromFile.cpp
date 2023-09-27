// 

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    double numero;
   

    file.open("numeros.txt");
    if (file.fail())
        cout << "ERROR: No se pudo abrir el archivo" << "numeros.txt" << endl;

    else
    {
        file >> numero;
        while(!file.eof())
        {
            cout << numero<< endl;
            file >> numero;
        }

    file.close();
    }

    return (0);
}