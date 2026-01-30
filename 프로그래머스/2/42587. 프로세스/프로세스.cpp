#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> que;
    queue<pair<int, int>> qu;
    
    for(int i=0; i<priorities.size(); i++){
        que.push(priorities[i]);
        qu.push({priorities[i], i});
    }
    
    int count=0;
    
    while(1){
        pair<int, int> current=qu.front();
        qu.pop();
        
        if(current.first!=que.top()){
            qu.push(current);
        }
        else{
            if(current.second==location){
                count++;
                return count;
            }
            count++;
            que.pop();
        }
        
    }
    
    return answer;
}