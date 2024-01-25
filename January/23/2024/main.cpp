#include <iostream>
#include <vector>
#include <catch2/catch_test_macros.hpp>


// takes in two integers and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
std::vector<int> Multiples(int n, int m){
    std::vector<int> vect;
    int cap = n * m;

    for(int i = 0; i < cap; i++){
        vect.push_back(n * i);
    } 
    return vect;
}

// takes an int, n, and returns the factorial of that int (n!)
long long Factorial(long long n){
    if(n>1)
        return n*Factorial(n-1);
    else
        return 1;
}

// returns -1 if the number is negative and 1 if positive
double doubleSign(double num){
    if(num < 0){
        return -1;
    } else{
        return 1;
    }
}

// adds n to each element of the vector
std::vector<int> AddN(std::vector<int> v, int n){
    for(long unsigned int i=0;i<v.size();i++){
        v[i] = v[i] + n;
    }
    return v;
}



int main(){
    std::cout << "Inputting -45 and 32, should receive -1 and 1" <<std::endl;
    std::cout << doubleSign(-45) << " and " << doubleSign(32) << std::endl;

    std::vector<int> vect = Multiples(2, 3);

    std::cout << "Inputting 2 and 3, should get 2 4 6 8 10 12 and nothing else" <<std::endl;
    for(long unsigned int i=0;i<vect.size();i++){
    std::cout<<vect[i]<<" ";
    }
    std::cout << std::endl;

    std::vector<int> v = {1, 2, 3};
    std::vector<int> newV = AddN(v, 3);
    std::cout << "Inputting a vector with 1, 2, 3 and number 3. Should get back 4, 5, 6 and nothing else./" <<std::endl;
    for(long unsigned int i=0;i<newV.size();i++){
    std::cout<<newV[i]<<" ";
    }

}
