#include<iostream>
using namespace std;

void printO(int N, int M) {
    if (N <= 0 || M <= 0) {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    
    for (int i = 0; i < N; ++i) { 
        for (int j = 0; j < M; ++j) { 
            std::cout << "O";
        }
        std::cout << std::endl; 
    }
}