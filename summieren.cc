#include <fstream>
#include <iostream>

int lieszwei(std::ifstream &file) {
  int zahl1;
  int zahl2;
  file >> zahl1;
  file >> zahl2;
  return zahl1 + zahl2;
}



int main() {
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  for (int i = 0; i < 234; i++) {
    int summierte_zahl;
    summierte_zahl = lieszwei(fin);
  
    //std::cout << summierte_zahl << std::endl;
    fout << summierte_zahl << std::endl;
  }
  fin.close();
  fout.close();
}