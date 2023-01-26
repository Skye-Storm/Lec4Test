#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include "functions_to_implement.cpp"

using namespace std;


int main(){

    int value = 2;
    int value2 = -2;
    vector<double> test;
    test.push_back(1);
    test.push_back(3);
    test.push_back(5);
    test.push_back(7);

    // for (int i = 0; i < test.size(); i++)
    // {
    //     cout << test[i] << " " << endl;
    // }

    cout << Sum(test) << endl;
    
    cout << Product(test) << endl;

    cout << Sign(value) << endl;

    cout << Sign(value2) << endl;

    return 1;
}