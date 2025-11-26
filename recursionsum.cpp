#include <iostream>
using namespace std;
int sumOfN(int n) {
    if(n==0){
        return 0;
    }
    return n + sumOfN(n - 1);
}

int main() {
    cout <<"Sum of first 5 numbers:"<<sumOfN(5) << endl;
    cout<<"Sum of first 10 numbers:"<<sumOfN(10)<< endl;
    cout<<"Sum of first 100 numbers:"<<sumOfN(100)<<endl;
    return 0; 
}