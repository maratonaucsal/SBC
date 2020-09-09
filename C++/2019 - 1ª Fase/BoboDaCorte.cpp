#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int vet[n];
	bool v;
	
	for(int i = 0; i < n; i++){
		cin >> vet[i];
	}
	
	int aux = vet[0];
	
	for(int i = 0; i < n; i++){
		if(aux < vet[i]){
			v = false;
		}	
	}
	
	if(v){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}