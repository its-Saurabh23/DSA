// Remember the directions 
// to_string  this function.

class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string>points;
        
        points.insert("0,0");
        int x = 0;
        int y = 0;
        for(int i = 0; i<path.length(); i++){
            if(path[i] == 'N'){
                y++;
            }
            else if(path[i] == 'S'){
                y--;
            }
            else if(path[i] == 'E'){
                x++;
            }
            else if(path[i] == 'W'){
                x--;
            }
        if(points.count(to_string(x) + "," + to_string(y))){
                return true;
            }
        points.insert(to_string(x) + "," + to_string(y));

        }
        return false;
    }

};