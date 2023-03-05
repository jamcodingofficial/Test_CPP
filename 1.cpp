/*
 - 문제 1번 해설 코드
 - TC(테스트 케이스)는 코드 가장 아래에 있습니다.
*/

#include <iostream>
#include <algorithm>

using namespace std;

string str[8];
int score[8] = {20, 15, 10, 5, 4, 3, 2, 1};
int r, b;

int main(){
    
    for(int i=0; i<8; i++){
        getline(cin, str[i]);
    }
    
    sort(&str[0], &str[8]);

    for(int i=0; i<8; i++){
        if(str[i][8] == 'R') r += score[i];
        else b += score[i];
    }
    
    if(r == b){
        if(str[0][9] == 'R') cout << "Red";
        else cout << "Blue";
    }else{
        if(r > b) cout << "Red";
        else cout << "Blue";
    }
    
    return 0;
}
/*
 1번 TC
 1:58:37 B
 1:30:59 R
 1:31:20 R
 1:30:02 B
 1:32:10 B
 1:44:36 R
 1:30:58 R
 1:31:51 B

 2번 TC
 0:00:02 R
 0:00:01 B
 8:01:02 R
 9:59:59 B
 9:00:01 B
 9:59:58 R
 8:01:01 R
 1:00:00 B
 
 3번 TC
 0:00:04 B
 0:00:02 R
 0:00:08 B
 0:00:03 R
 0:00:05 B
 0:00:07 R
 0:00:01 B
 0:00:06 R
 */
