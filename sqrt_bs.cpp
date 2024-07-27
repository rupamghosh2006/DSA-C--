#include <iostream>
using namespace std;

long long int SquareRoot(int x) {
    
    int s = 0;
        int e = x;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == x)
                return mid;
            
            if(square < x ){
                ans = mid;
                s = mid+1;
            }else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n,int precision,int tempSol){
    double factor = 1;
    double ans = tempSol;
    for (int i=0; i<precision; i++){
        factor /= 10;
        for(double j = ans; j*j<n; j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n,precision,tempSol;
    cout << "Enter the no. which Square Root you want : ";
    cin >> n;
    cout<<"No. of decimal places : ";
    cin>>precision;
    tempSol=SquareRoot(n);
    cout<<"Answer is = "<<morePrecision(n,precision,tempSol);
    return 0; 
}
