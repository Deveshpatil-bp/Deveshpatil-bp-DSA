#include<iostream>
using namespace std;

void print() {
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; i++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
}
