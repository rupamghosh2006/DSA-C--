#include <iostream>
using namespace std;

int main(){

    int row=1,n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    while(row<=n){
        int space=row;
        while(space<n){
        cout<<" ";            
        space+=1;
        }
        int col=1;
        while(col<=row){
            cout<<row;
            col+=1;
        }
        cout<<endl;
    row+=1;
    }
}