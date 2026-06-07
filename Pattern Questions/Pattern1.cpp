// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int row = 9;
    int i ;
    for(i = 1 ; i<=  row/2 ; i++){
        for(int j = 0 ; j<=row/2-i ; j++){
            cout<<"_";
        }
        for(int j = 1 ; j<=i ; j ++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(i ; i<=row ; i++){
        for(int j = 0 ; j< i-row/2-1 ; j++){
            cout<<"_";
        }
        for(int j = 1 ; j<=row-i+1; j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}
