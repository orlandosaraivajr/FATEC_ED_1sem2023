/*
Exemplo do uso de STL
Orlando Saraiva Jr
26/05/2023

*/
#include <iostream>
#include <list>
#include <string>
#include<vector>
using namespace std;

int main() {
	list<int> minha_lista{1, 2 , 3 ,4 , 5, 6};
  list<float> minha_lista2{20.1, 30.4 ,8.4 , 8.6};
  vector<string> minha_lista3;
  minha_lista3.push_back("José");
  minha_lista3.push_back("Maria");
  minha_lista3.push_back("Lucas");
  minha_lista3.push_back("João");
  minha_lista3.push_back("Mateus");
  minha_lista3.push_back("Marcos");

  cout << " Tamanho da lista: " << minha_lista.size() << "\n";
	for (auto i : minha_lista) {
		cout << i << ' ';
	}

  cout << "\n\n Tamanho da lista 2: " << minha_lista2.size() << "\n";
  for (auto i : minha_lista2) {
		cout << i << ' ';
	}

  cout << "\n\n Tamanho da lista 3: " << minha_lista3.size() << "\n";
  for (auto i : minha_lista3) {
		cout << i << ' ';
	}
  cout << "\n\n";
	return 0;
}
