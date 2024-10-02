#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;
    //cout<< vec.capacity();
    vec.push_back(10);
    vec.push_back(100);

    cout<<vec.at(1);

}