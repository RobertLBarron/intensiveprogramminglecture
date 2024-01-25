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



TEST_CASE( "testing doubleSign", "[doublesign]" ) {
    REQUIRE( doubleSign(-45) == -1 );
    REQUIRE( doubleSign(32) == 1);
}

// TEST_CASE( "testing Multiples", "[multiples]" ) {

//     std::vector<int> vect = Multiples(2, 3);
//     std::vector<int> vect2 = {2,4,5,8,10,12};

//     for(int i = 0; i < 6; i++){
//         REQUIRE( vect[i] == vect2[i] );
//     }
// } 

// TEST_CASE( "testing addN", "[addn]" ) {

//     std::vector<int> v = {1, 2, 3};
//     std::vector<int> newV = AddN(v, 3);
//     std::vector<int> testV = {4,5,6};

//     for(int i = 0; i < 3; i++){
//         REQUIRE( newV[i] == testV[i] );
//     }
// } 