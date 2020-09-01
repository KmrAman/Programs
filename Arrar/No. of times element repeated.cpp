#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[6]={1,14,15,99,1,6};
    int b[100];
    for(int i=0;i<100;i++){
        b[i]=0;
    }
    for(int i=0;i<6;i++){
        b[a[i]]++;
    }
    for(int i=0;i<100;i++){
        if(b[i]!=0){
        cout<<i<<" "<<b[i]<<endl;
    }
    }
    return 0;
}
