
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int b = a;
    int len = 1;
    if (a > 0) {
    for (len = 0; a > 0; len++) {
        a = a / 10;
      }
    }
    
    int array[len];
    for (int i = 5; i >= 0; i--) {
    array[i] = b % 10;
    b /= 10;
    }
    
    for(int i=0;i<len;i++)
    {
        int q=array[i];
    if(q==0&&q==2&&q==3&&q==5&&q==6&&q==7&&q==8&&q==9)
    cout<<" - ";
    }
    cout<<""<<endl;
    
    // if(1&&2&&3&&7)
    // cout<<"   |";
    // else if(5&&6)
    // cout<<"|  ";
    // else
    // cout<<"| |";
    
    // cout<<""<<endl;
    
    // if(2&&3&&4&&5&&6&&8&&9)
    // cout<<" - ";
    
    // cout<<""<<endl;
    
    // if(1&&3&&4&&5&&7&&9)
    // cout<<"   |";
    // else if(2)
    // cout<<"|  ";
    // else
    // cout<<"| |";
    
    // cout<<""<<endl;
    
    // if(0&&2&&3&&5&&6&&8&&9)
    // cout<<" - ";
    // }
    return 0;
}
