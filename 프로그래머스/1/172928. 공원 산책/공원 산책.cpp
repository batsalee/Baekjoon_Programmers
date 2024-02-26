#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int y, x;
    for(int i = 0; i < park.size(); i++) {
        for(int j = 0; j < park[0].size(); j++) {
            if(park[i][j] == 'S') {
                y = i; x = j;
            }
        }
    }
    
    for(string& r : routes) {
        char direction = r[0];
        int distance = r[2] - '0';        
        bool flag = true;
        
        if(direction == 'E') {  
            if(x + distance >= park[0].size()) continue;
            for(int i = 1; i <= distance; i++) {
                if(park[y][x + i] == 'X') { 
                    flag = false; 
                    break; 
                }               
            }
            
            if(flag) x += distance;
        }
        else if(direction == 'W') {  
            if(x - distance < 0) continue;
            for(int i = 1; i <= distance; i++) {
                if(park[y][x - i] == 'X') { 
                    flag = false; 
                    break; 
                }               
            }
            
            if(flag) x -= distance;
        }
        else if(direction == 'S') {  
            if(y + distance >= park.size()) continue;
            for(int i = 1; i <= distance; i++) {
                if(park[y + i][x] == 'X') { 
                    flag = false; 
                    break; 
                }               
            }
            
            if(flag) y += distance;
        }
        else if(direction == 'N') {  
            if(y - distance < 0) continue;
            for(int i = 1; i <= distance; i++) {
                if(park[y - i][x] == 'X') { 
                    flag = false; 
                    break; 
                }               
            }
            
            if(flag) y -= distance;
        }
    }

    return vector<int> {y, x};
}