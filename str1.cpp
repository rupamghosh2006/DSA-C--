#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "daabcbaabcbc", part = "abc";
    cout<<s.find(part)<<endl;
    cout<<s.rfind(part);
}
