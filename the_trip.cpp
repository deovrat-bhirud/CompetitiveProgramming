#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n&&EOF&&n!=0){
        vector<double>vec;
        double sumandavg=0,ans;
        for(int i=0;i<n; i++){
            double x;
            cin >>x;
            vec.push_back(x);
            sumandavg+=x;   
        }
        sumandavg/=n;
        //cout<<sumandavg;
        for(int i=0;i<n; i++){
            double diff=((vec[i]-sumandavg)*100)/100.0;
            if(diff>0) ans+=diff;
        }
        printf("$%.2lf\n",ans);
        ans=0;
    }
}
