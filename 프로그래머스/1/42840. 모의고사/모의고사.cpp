#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int maxcount;
    int count[3]={0,};
    int po1[5]={1,2,3,4,5};
    int po2[8]={2,1,2,3,2,4,2,5};
    int po3[10]={3,3,1,1,2,2,4,4,5,5};
    for(int i=0; i<answers.size(); i++){
        if(answers[i]==po1[i%5]){
            count[0]++;
        }
        if(answers[i]==po2[i%8]){
            count[1]++;
        }
        if(answers[i]==po3[i%10]){
            count[2]++;
        }
    }
    maxcount=max(count[0], max(count[1],count[2]));
    for(int i=0; i<3; i++){
        if(count[i]==maxcount){
            answer.push_back(i+1);
        }
    }
    return answer;
}