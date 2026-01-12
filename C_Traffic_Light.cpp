#include<bits/stdc++.h>
using namespace std;
bool pred(int k , int n , string &s , char c){
    
}
void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int left = 0 , right = n , ans = n;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(pred(mid , n , s , c)){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }

}
cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}