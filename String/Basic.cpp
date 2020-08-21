// https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,c;
    char t;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    c=a+b;
    cout<<c<<endl;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b;
  
    return 0;
}
