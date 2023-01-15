#include<iostream>
using namespace std;

int main()
{
    int low, high;
    cin >> low >> high;

    for(int n = low; n <= high; n++){
        int factors = 0;
        
        for(int div = 2; div * div <= n; div++){
            if(n % div == 0){
                factors = factors + 1;
                break;
            }
            
        }
        

        if(factors == 0){
           cout<<n<<endl; 
        }
    }
    return 0;
}
