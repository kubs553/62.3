#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int rozmiar = 1000;
  int t1[rozmiar]; 
  int t2[rozmiar];
  int licznik1 = 0; 
  int licznik2 = 0;
  ifstream plik1("liczby1.txt");
  ifstream plik2("liczby2.txt");
  for (int i = 0; i < rozmiar; i++) plik1 >> oct >> t1[i];
  for (int i = 0; i < rozmiar; i++) plik2 >> t2[i];
  for (int i = 0; i < rozmiar; i++) {
    if (t1[i] == t2[i]) licznik1++;
    if (t1[i] > t2[i]) licznik2++;
  }
  cout << "Liczby o tych samych wartosciach: " <<  licznik1 << "\n";
  cout << "Liczba z pierwszego pliku jest wieksza w tylu wierszach: " << licznik2 << "\n";
  return 0;
}
