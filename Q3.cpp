#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool isPrime = true;
        for(int i = 2;i < n;i ++){
            if(n%i == 0){
                cout << "not prime" << endl;
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << "prime" << endl;
        }
    }
    return 0;
}
