#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;
    for(int i=0; i<participant.size(); i++){
        if(m.find(participant[i])==m.end()){
            m.insert({participant[i], 1});
        }
        else{
            m[participant[i]]++;
        }
    }
    for(int i=0; i<completion.size(); i++){
        m[completion[i]]--;
    }
    for(int i=0; i<participant.size(); i++){
        if(m[participant[i]]>0){
            return participant[i];
        }
    }
}