#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;



int main() {
  ifstream fin1("datensumme.txt");
  double mean = 0;
  double variance;
  for (int i = 0; i < 234; i++) {
    int z;
    fin1 >> z;
    mean+= z;
  }
  mean = mean/234;
  cout << "mean: " << mean << endl;
  ifstream fin2("datensumme.txt");
  for (int i = 0; i < 234; i++) {
      int z;
      fin2 >> z;

      variance += pow((z-mean),2);
  }
  variance = variance/234;
  cout << "variance: " << variance << endl;
  double std = sqrt(variance);
  cout << "standard deviation: " << std << endl;

}