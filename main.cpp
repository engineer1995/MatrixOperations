#include <iostream>

int main (){


int n {0};

std::cin >> n ;

if( n <= 0) {
  return 1;
}

int** matrix = new int* [n];

for(int i = 0; i < n; ++i){
  matrix[i] = new int [n];
  }

for (int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
        std::cin >> matrix[i][j];
    }
}

int sum_main_diagonal = 0;
for(int i = 0; i < n; ++i){
  sum_main_diagonal += matrix[i][i];
}
//std::cout << sum_main_diagonal;

int sum_side_diagonal = 0;
for(int i = 0; i < n; ++i){
  sum_side_diagonal += matrix[i][n-i-1];
}
//std::cout << sum_side_diagonal;

int sum_under_main = 0;
for(int i = 0; i < n; ++i){
  for(int j = 0; j < i; ++j){
    sum_under_main += matrix[i][j];
  }
}
//std::cout << sum_under_main;

int sum_under_side = 0;
for(int i = 0;i < n; ++i){
  for(int j = n-i; j <n; ++j){
    sum_under_side += matrix[i][j];
  }
}
std::cout << sum_under_side;



for(int i = 0; i < n; ++i){
  delete[] matrix[i];
}

delete [] matrix;

}
