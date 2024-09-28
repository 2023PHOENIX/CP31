//  A. Halloumi Boxes

#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;  cin>>t;

    while(t--){

        int n,k;    cin>>n>>k;
        vector<int> v(n);
        for(int &x : v)cin>>x;

        bool flag = true;
        for(int i = 1; i < n; i++){

            if(v[i] < v[i - 1]) {flag = false; break;}
        }

        if(flag){
            cout<<"YES\n" ;
        }else{
            if(k > 1){
                cout<<"YES\n";
            }else{
            cout<<"NO\n";}
        }
    }
    return 0;
}
