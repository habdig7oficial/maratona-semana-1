#include <iostream>

using namespace std;

int main(){
    int numero_casos;
    cin >> numero_casos;
    string casos_teste[numero_casos + 1]; 
    for (int i = 0; i <= numero_casos; i++){
        getline(cin, casos_teste[i]);
        // cout  << casos_teste[i] << endl;
    }
    // cout  << endl;
    for (int i = 1; i <= numero_casos; i++){
        // cout  << "Primeira Metade: " << endl;
        for(int j = 0; j < casos_teste[i].length() / 2; j++){
            // cout  << casos_teste[i][j] << " - " << j;
            // cout  << " | " << casos_teste[i][(casos_teste[i].length() / 2) - (j + 1)] << " - " << (casos_teste[i].length() / 2) - (j + 1) << endl;
            cout << casos_teste[i][(casos_teste[i].length() / 2) - (j + 1)];
        }

        // cout  << "Segunda Metade: " << endl;
        for(int j = casos_teste[i].length() / 2; j < casos_teste[i].length(); j++){
            // cout  << casos_teste[i][j] << " - " << j;
            // cout  << " | " << casos_teste[i][(casos_teste[i].length()) - (j + 1) + (casos_teste[i].length() / 2)] << " - " << (casos_teste[i].length()) - (j + 1) + (casos_teste[i].length() / 2)  << endl;
            cout << casos_teste[i][(casos_teste[i].length()) - (j + 1) + (casos_teste[i].length() / 2)];
        }
        cout << endl;
    }

    return 0;
}

/* Run with: g++ 1235.cpp -o 1235.elf && ./1235.elf < testes.mock */