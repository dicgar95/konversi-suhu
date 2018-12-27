#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int c,f,k;
  std::cout << "konversi suhu" << '\n';
  std::cout << "masukan nilai celcius :";
  std::cin >> c;

  f=9/5*c+32;
  k=4/5*c;

  std::cout << "nilai fahrenheit :"<<f << '\n'<<"nilai kelvin :"<<k;


  return 0;
}
