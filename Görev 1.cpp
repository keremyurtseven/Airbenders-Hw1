#include <iostream>

#define GRAVITY 9.80665

using namespace std;

double freeFall(int t);

int main(){

    double t;
    cout << "How much time should the object fall? ";
    cin >> t;
    
    double x = freeFall(t);
    cout << "The distance is " << x;

    return 0;
}

double freeFall(int t){
    return (GRAVITY * t * t)/2;
}