#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> buffer;
    int buf=0;
    while(buf<progresses.size()){
        for(int i=0; i<progresses.size(); i++){
            if(progresses[i]>=100){
                if(buf==i){
                    buffer.push_back(i);
                    buf++;
                }
            }
            else{
                progresses[i]+=speeds[i];
            }
        }
        if(buffer.size()!=0){
            answer.push_back(buffer.size());
            buffer.clear();
        }
    }
    return answer;
}