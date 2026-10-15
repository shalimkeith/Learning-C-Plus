#include<iostream>

int main(){

//      Explicit  


//    double x = (int) 3.14;

//    std::cout <<x;

    int correct = 6;
    int questions = 13;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;

}