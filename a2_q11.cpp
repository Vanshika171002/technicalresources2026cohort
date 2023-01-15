#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int stars = 1;
    int val = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= stars; j++){
            cout<<val<<"\t";
            val++;
        }
        cout<<endl;
        stars++;
    }
    return 0;
}
