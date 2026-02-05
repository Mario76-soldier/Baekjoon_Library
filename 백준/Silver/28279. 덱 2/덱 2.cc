#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, a, b;
    cin>>n;
    deque<int> d;
    for(int i=0; i<n; i++){
        cin>>a;
        switch (a){
            case 1:
                cin>>b;
                d.push_front(b);
                break;
            case 2:
                cin>>b;
                d.push_back(b);
                break;
            case 3:
                if(d.size()==0){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<d.front()<<'\n';
                    d.pop_front();
                }
                break;
            case 4:
                if(d.size()==0){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<d.back()<<'\n';
                    d.pop_back();
                }
                break;
            case 5:
                cout<<d.size()<<'\n';
                break;
            case 6:
                cout<<d.empty()<<'\n';
                break;
            case 7: 
                if(d.size()==0){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<d.front()<<'\n';
                }
                break;
            case 8:
                if(d.size()==0){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<d.back()<<'\n';
                }
                break;
        }
    }
}