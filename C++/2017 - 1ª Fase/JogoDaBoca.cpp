#include <iostream>
 
using namespace std;
 
int main() {
 
    string texto = "";
    
    cin >> texto;
    
    int x = 0;
    
    for(int i = 0; i < texto.size(); i++){
        x += (texto[i] - '0');
    }
    
    cout << x%3 << endl;
 
    return 0;
}