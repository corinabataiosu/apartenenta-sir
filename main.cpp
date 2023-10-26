#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    string substr;

    int nr_aparitii = 0;

    bool apartenenta = false;

    cout << "Introduceti sirul de caractere" << endl;
    getline(cin, str);

    cout << "Introduceti secventa de caractere care trebuie cautata" << endl;
    getline(cin, substr);

    size_t indice = -1;

    do {
        indice = str.find(substr, indice + 1);
        if (indice != string::npos) {
            apartenenta = true; 
            nr_aparitii++;
        }
    } while (indice != string::npos);

    if (apartenenta) {
        cout << "Sirul cautat apare de " << nr_aparitii << " ori." << endl;
    }
    else {
        cout << "Secventa introdusa nu apartine sirului!" << endl;
    }

    return 0;
}
