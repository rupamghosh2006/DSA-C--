#include<iostream>
using namespace std;

void makeDiamond(int n){
    if(n%2==0 || n<0){
        cout<<"Naomi pay attention!";
    }
    else{
        int mid =(n+1)/2;
        
        //upper half upto middle
        for(int i=1;i<=mid;i++){
            for(int j=i;j<mid;j++){
                cout<<" ";
            }
            for(int k=1;k<=(i*2)-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        
        //lower half after mid
        for(int i=1;i<mid;i++){
            for(int j=1;j<=i;j++){
            cout<<" ";
        }
            for(int k=1;k<=n-(i*2);k++){
                cout<<"*";
        }
        cout<<endl;
    }
}
}

int main(){
    int n;
    cin>>n;

    makeDiamond(n);
}