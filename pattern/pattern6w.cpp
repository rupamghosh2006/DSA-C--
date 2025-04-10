#include <iostream>
using namespace std;

int main(){
    int n,row =1;
    cout<<"Enter no. of rows: ";
    cin>>n;

    while(row<=n){
        int column =1;
        while(column<=row){
        cout<<row;
        column +=1;
        }
        cout<<endl;
        row +=1;
    }

}