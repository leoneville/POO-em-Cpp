#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v( {5, 4, 3, 2, 1} );

    sort(&v[0], &v[0]+v.size()); 
    

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    cout << "Tamanho: " << v.size() << endl;
}