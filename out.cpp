#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  fstream myfile;
  myfile.open(argv[1], ios::in);
  string ln;
  while(getline(myfile, ln)) {
    cout << ln << endl;
  }
  cout << endl;
  return 0;
}
