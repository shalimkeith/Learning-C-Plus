#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int >> pairlist_t;

//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;


int main(){

    text_t firstName = "Keith";
    number_t age = 22;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}