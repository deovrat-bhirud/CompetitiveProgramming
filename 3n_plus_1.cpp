#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int temp1,temp2,temp3=0,temp4=0,i,j,k,a,length=0;
    while(cin >> i >> j && EOF){
        temp1=i;
        temp2=j;
        if(i>j) std::swap(i,j);
        for(k=i;k<(j+1);k++){
            a=k;
            while(a>1){
                a & 1 ? a=(3*a)+1 : a=a/2;   
            length+=1;
          }
          temp3=length+1;
          length=0;
          if(temp4<temp3) temp4=temp3;
        }    
    cout<<temp1<<" "<<temp2<<" "<<temp4<<endl;
    temp4=0;
    temp3=0;
    }
    return 0;
}
