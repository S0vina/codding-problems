#include <iostream>
using namespace std;

int main() {
  int resp, gols_inter, gols_gremio, grenais, inter_wins, gremio_wins, empates; 
  grenais = inter_wins = gremio_wins = empates = 0;

  while(1) {
    resp = gols_gremio = gols_inter = -1;

    while(gols_inter < 0) {
      cin >> gols_inter;
    }
    while(gols_gremio < 0) {
      cin >> gols_gremio;
    }

    if(gols_gremio == gols_inter) {
      empates++;
    } else if (gols_inter > gols_gremio) {
      inter_wins++;
    } else {
      gremio_wins++;
    }
    grenais++;

    while(resp != 1 && resp != 2) {
      cout << "Novo grenal (1-sim 2-nao)" << "\n";
      cin >> resp;
    }

    if (resp == 2) break;
  }

  cout << grenais << " grenais" << "\n";
  cout << "Inter:" << inter_wins << "\n";
  cout << "Gremio:" << gremio_wins  << "\n";
  cout << "Empates:" << empates << "\n";

  if (inter_wins > gremio_wins) {
    cout << "Inter venceu mais" << endl;
  }else if(gremio_wins > inter_wins){
    cout << "Gremio venceu mais" << endl;
  } else {
    cout << "Nao houve vencedor" << endl;
  }

  return 0;
}
