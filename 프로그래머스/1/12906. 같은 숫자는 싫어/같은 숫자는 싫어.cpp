#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int buffer=-1;
    for(int i=0; i<arr.size(); i++){
        if(buffer!=arr[i]){
            answer.push_back(arr[i]);
            buffer=arr[i];
        }
    }

    return answer;
}