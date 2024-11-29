#include<bits/stdc++.h>

using namespace std;
long long a[5000001];

void max_uoc(){
    for(int i = 2 ;i<=5000000 ;i++){
        int n = i ;     
        vector<long long> v ;
        while(n%2==0){
            v.push_back(2);
            n/=2;
        }
        while(n%3 ==0){
            v.push_back(3);
            n/=3;
        }
        for(int i = 5 ;i<=sqrt(n);i+=6 ){
            while(n%i==0){
                v.push_back(i);
                n/=i;
            }
            while(n%(i+2)==0){
                v.push_back(i+2);
                n/=(i+2);
            }
        }
        if(n) v.push_back(n);
        sort(v.begin(),v.end());
        a[i] = a[i-1] + v[v.size()-1];
    }
}
int main(){
    max_uoc();
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }

}