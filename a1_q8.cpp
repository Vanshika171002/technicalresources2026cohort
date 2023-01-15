#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int nod = 0;
    int num = n;
    while(num != 0){
        num /= 10;
        nod++;
    }
    k = k % n;
if(k < 0){
    k += nod;
}
    int div= pow(10,k);
    int mult = pow(10, nod - k);
    
    int q = n / div;
    int r = n % div;

    int ans = (r * mult) + q;
    cout<<ans<<endl;
    return 0;
}
