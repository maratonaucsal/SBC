#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int n1;
	int aux = 0;
	for(int i = 0; i < n; i++){
		cin >> n1;
		if(n1 != 1){
			aux++;
		}
	}
	
	cout << aux<< endl;
	return 0;
}