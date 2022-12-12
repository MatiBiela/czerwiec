#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

class file
{
    string n;   
        public:
        	void odwroc_napis();
        	void pierwsza_duza_litera();
        	void licznik_liter();
        	void krotszy_napis();
        	void pierwszy_wslowniku();
};
void file::odwroc_napis(){
	string n;
	cout << "Podaj napis do odwrocenia: " << endl;
	cin >> n;
	reverse(n.begin(), n.end());
	cout << n << endl;
}

void file::pierwsza_duza_litera(){
	string n;
	cout << "Podaj napis z conajmniej jedna duza litera: " << endl;
	cin >> n;
	int nlength = n.length();
	for(int i=0; i<nlength; i++){
		if(isupper(n[i]))
			cout << n[i] << endl;
	}
}

void file::licznik_liter(){
	string n;
	cout << "Podaj slowo: " << endl;
	cin >> n;
	int counts[26] = {0};
	
	for(int i=0; i<n.length(); i++)
	{
		char c = n[i];
		counts[c - 'a']++;
	}
	
	for(int i=0; i < 26; i++){
		cout << (char)(i + 'a') << ": " << counts[i] << endl;
	}
}

void file::krotszy_napis(){
	cout << "Podaj pierwsze slowo: " << endl;
	string n1;
	cin >> n1;
	cout << "Podaj drugie slowo: " << endl;
	string n2;
	cin >> n2;
	int n1length = n1.length();
	int n2length = n2.length();
	if(n1length > n2length){
		cout << n2 << endl;
	} else {
		cout << n1 << endl ;
	}
}

void file::pierwszy_wslowniku(){
	cout << "Podaj pierwsze slowo: " << endl;
	string n1;
	string n2;
	cin >> n1;
	cout << "Podaj drugie slowo: " << endl;
	cin >> n2;
	if(n1.compare(n2) < 0){
		cout << n1 <<" jest wyzej w alfabecie" << endl;
	} else {
		cout << n2 <<" jest wyzej w alfabecie" << endl;
	}
	
}
int main()
{
        file f;
        f.odwroc_napis();
        f.pierwsza_duza_litera();
    	f.licznik_liter();
        f.krotszy_napis();
        f.pierwszy_wslowniku();
        return 0;
}
