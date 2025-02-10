#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector<int> v;
int arr[10]={0,};
bool checker[10]={false,};

void dfs(int a){
    if(a==m){
        for(int i=0; i<m; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=1; i<=n; i++){
        if(!checker[i]) {
            checker[i]=true;
            arr[a] = v[i-1];
            dfs(a+1);
            checker[i]=false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    int num;
    for(int i=0; i<n; i++){
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    dfs(0);
    return 0;
}
