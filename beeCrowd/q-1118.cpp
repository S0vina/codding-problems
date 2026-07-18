#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float notaUm, notaDois;
  float mean = 0;
  int resp = 0;

  while (1) {
    cout << fixed << setprecision(2);

    notaUm = -1.0; 
    notaDois = -1.0;

    while (notaUm < 0 || notaUm > 10){
      cin >> notaUm;
      if (notaUm < 0 || notaUm > 10) cout << "nota invalida" << "\n";
    }

    while (notaDois < 0 || notaDois > 10){
      cin >> notaDois;
      if (notaDois < 0 || notaDois > 10) cout << "nota invalida" << "\n";
    }

    cout << "media = " << ((notaUm + notaDois) / 2.00) << "\n";
    
    while (1) {
      cout << "novo calculo (1-sim 2-nao)" << "\n";
      cin >> resp;
      if (resp == 1 || resp == 2) break;
    }

    if (resp == 2) break;
  }
    
  return 0;
}
