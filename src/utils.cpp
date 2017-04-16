#include "../include/utils.hpp"
#include "../include/matrix.hpp"


void load(const char* path, double* weights) {
  using namespace std;
  ifstream myfile;
  string infile;
  string line;
  string outfile;
  myfile.open(path);
  int i = 0;
  while (getline (myfile, line, ',')){
  	weights[i] = stod(line);
    i++;
  }
}


int Equal(const double * a,const double * b, int len) {
  int correct = 0;
  for (int j = 0; j < len; j++) {
    if(a[j] == b[j])
      correct ++;
  }
  return correct;
}

void argmax(const double* input, double* result, int w, int h) {
  for (int64 i=0; i < h; i++) {
    double temp = input[i*w];
    result[i] = 0;
    for (int64 j=1; j < w; j++) {
      if (temp < input[i*w+j]) {
        temp = input[i*w+j];
        result[i] = j;
      }
    }
  }
}