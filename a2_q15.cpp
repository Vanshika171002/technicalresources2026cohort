#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int stars = 1;
    int spaces = n / 2;
    int oval = 1;

    for(int i = 1; i <= n; i++){
        int ival = oval;
        for(int j = 1; j <= spaces; j++){
            cout<<"\t";
        }
        for(int j = 1; j <= stars; j++){
            cout<<ival<<"\t";
            if(j <= stars / 2){
                ival++;
            }
            else{
                ival--;
            }
        }
        cout<<endl;
        if(i <= n / 2){
            spaces--;
            stars += 2;
            oval++;
        }
        else{
            spaces++;
            stars -= 2;
            oval--;
        }
    }
    return 0;
}
