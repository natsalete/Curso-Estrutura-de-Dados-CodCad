#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> fila;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        fila.push_back(x);
    }

    int m;

    cin >> m;

    int id;

    while(m--){
        cin >> id;
        fila.erase(remove(fila.begin(), fila.end(), id), fila.end());
    }

    for (int i = 0; i < fila.size(); i++) {
        if(i != fila.size() - 1){
            cout << fila[i] << " ";
        }else {
           cout << fila[i] << endl;
        }
    }


    return 0;
}
