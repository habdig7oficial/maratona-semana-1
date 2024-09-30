/*
    Copyright © 2024 Mateus Felipe da Silveira Vieira

    This program is free software: you can redistribute it and/or modify it under the terms of the GNU Affero General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
*/

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