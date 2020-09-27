#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main() {
  float nrLat;
  float dimLaturii;
  float aria;

  cout << "Print the area of a polygon: " << endl;
  cout << "---------------------------" << endl;

  cout << "Introduceti nr de laturi ale poligonului: ";
  cin >> nrLat;

  cout << "Introduceti dimensiunea laturii poligonului: ";
  cin >> dimLaturii;

aria = (nrLat * (dimLaturii * dimLaturii)) / (4.0 * tan(PI / nrLat));
  //incorect: aria = 1./4. * nrLat * dimLaturii * dimLaturii * tan(PI/nrLat);
//corect este: ar= (n * (s * s)) / (4.0 * tan((M_PI / n)));
  cout << "Aria poligonului este: " << aria << endl;
  cout << endl;
  return 0;
}