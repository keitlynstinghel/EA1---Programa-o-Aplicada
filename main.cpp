#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define numeros 8
#define teclas 4

char teclado[numeros][teclas] = {
	{'a', 'b', 'c', '\0'},
	{'d', 'e', 'f', '\0'},
	{'g', 'h', 'i', '\0'},
	{'j', 'k', 'l', '\0'},
	{'m', 'n', 'o', '\0'},
	{'p', 'q', 'r', 's'},
	{'t', 'u', 'v', '\0'},
	{'w', 'x', 'y', 'z'}
};

void ler(char letra); 

int main() {
	char palavra_P[50];
	string palavra;

  cout << "Digite a palavra: " << endl;
	cin >> palavra;
	
	if(palavra.length() <= 50){
		strcpy(palavra_P, palavra.c_str());

    cout << "Para obtenção da palavra desejada, você deverá pressionar as seguintes teclas e seu número de vezes:" << endl;
		
		for(int i = 0; palavra_P[i] != '\0'; i++){
			ler(palavra_P[i]);
		}
	} 
	else{
		cout << "Palavras de no máximo 50 caracteres" << endl;
	}
}

void ler(char letra){
	for(int i = 0; i <= numeros; i++){
		for(int j = 0; j <= teclas; j++){
			if(teclado[i][j] == letra){
				cout << "#" << i + 1 << "=" << j + 1 << endl;
			}
		}
	}
}