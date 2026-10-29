#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    do {
        cout << "Introduzca un numero positivo..."<<endl;
        cin >> num;
        if (num <= 0){
		 cout << "Error: numero invalido"<<endl;
		}
    } while (num <= 0);
    cout << "El numero " << num <<" es positivo"<<endl;
    return 0;
}
