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
    



    for(int i = 0; i < n; ++i){
      delete[] matrix[i];
    }

    delete [] matrix;

}
