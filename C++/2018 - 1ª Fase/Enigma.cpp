#include <iostream>

using namespace std;

int main(){
	string palavra, subPalavra;
	cin >> palavra;
	cin >> subPalavra;
	
	int cont=0;
	bool valido = false;
	for (int j = 0; j<palavra.length() - subPalavra.length() +1; j++){
			for(int i=0;i<subPalavra.length();i++){
				if (palavra[i+j] == subPalavra[i]){
					break;
				}
				cont++;
			}
	}
	cout<<cont<<"\n";
	
	return 0;
}
