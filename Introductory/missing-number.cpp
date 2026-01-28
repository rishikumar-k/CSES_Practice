#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(nullptr);
    cin.tie(false);
    int n;
    cin>>n;
    long long tsum = (long long)n * (n + 1) / 2;
    long long gsum = 0;
    for(int i=1;i<=n-1;i++){
        int x;
        cin>>x;
        gsum += x;
    }
    cout<<tsum - gsum<<"\n";
    return 0;
}