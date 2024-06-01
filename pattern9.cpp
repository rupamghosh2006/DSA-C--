#include <iostream>
using namespace std;

int main(){
    char ch = 65;int n;
    cout<<"Enter a no. 1 to 26: ";
    cin >> n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=3;column++)
        {
            cout<<ch<<" ";

        }
        cout<<endl;
        ch+=1;
    }

}