#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;



int main() {
ifstream fin1("datensumme.txt");
ofstream fout1("mittelwerte.txt");
ofstream fout2("varianzen.txt");
//double mean = 0;
double mean[26] = {0};
double variance[26] = {0};
double mean_mean = 0;
double mean_variance = 0;
//mean[]=5;
//cout << mean[] << endl;

for (int i = 0; i < 234; i++) {

  int z;
  fin1 >> z;
  mean[i/9]+= z;
}
for (int j=0; j<26; j++) {
  mean[j] = mean[j]/9;
  cout << "mean: " << mean[j] << endl;
  fout1 << mean[j] << endl;
  mean_mean+= mean[j];
}
mean_mean /= 26;

ifstream fin2("datensumme.txt");
for (int i = 0; i < 234; i++) {
  int z;
  fin2 >> z;

  variance[i/9] += pow((z-mean[i/9]),2);
}
for (int j=0; j<26; j++) {
  variance[j] = variance[j]/(9-1);
  cout << "variance: " << variance[j] << endl;
  fout2 << variance[j] << endl;
  mean_variance += variance[j];
}
mean_variance /= 26;
cout << "mean_mean: " << mean_mean << endl;
cout << "mean_variance: " << mean_variance << endl;

/*
double std = sqrt(variance);
cout << "standard deviation: " << std << endl;
*/
}
