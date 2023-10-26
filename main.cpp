#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string str;  //string in care vom cauta
    string substr; //substringul cautat

    //initializam numarul de aparitii al substringului la 0
    int nr_aparitii = 0;

    bool apartenenta = false;

    cout << "Introduceti sirul de caractere" << endl;
    getline(cin, str);

    cout << "Introduceti secventa de caractere care trebuie cautata" << endl;
    getline(cin, substr);

    //initializam indicele la -1
    size_t indice = -1;

    do {
        indice = str.find(substr, indice + 1);
        if (indice != string::npos) {
            //daca substringul este gasit, modificam valoarea apartenentei si incrementam nr_aparitii
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
