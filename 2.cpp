#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string s, tmp;
vector<string> v;

int main(){
    cin >> s;
    int len = s.length();
    for(int i=1; i<len; i++){
        if(s[i] == ',' || s[i] == ']'){
            v.push_back(tmp);
            tmp.clear();
        }else{
            tmp += s[i];
        }
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<3; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}