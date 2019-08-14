#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int1024_t count=1;
        for(int i=1; i<=k;i++)
            count=count*i;
        cout<<count<<endl;
        count=1;
    }
    return 0;
}
