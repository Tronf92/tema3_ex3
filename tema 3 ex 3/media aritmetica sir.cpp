//Nicorici Adrian, 22.03.2014
//3. Se considera un sir de maxim 50 de numere intregi. Sa se scrie un program care afiseaza media aritmetica a numerelor din sir.


#include <iostream>
using namespace std;

void citire(int n,int k[50]);
void medie(int n,int k[50]);

void citire(int n,int k[50]){
	int i;
	for(i=0;i<n;i++){
		cout << "sir[" << i << "]=";
		cin >> k[i];
	}
}

void medie(int n,int k[50]){
	int media=0,i;
	for(i=0;i<n;i++){
		media+=k[i];
	}
	cout.precision(3);
	cout << "Media numerelor este " << (double)media/n;
}

int main(){
	int n,sir[50];
	cout << "Introduceti un nr:" << endl;
	cin >> n;
	cout << "Introduceti elementele vectorului:"<< endl;
	citire(n,sir);
	medie(n,sir);

	system("pause");
	return 0;
}

