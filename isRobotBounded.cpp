class Solution {
public:
//只需要判断机器人一轮以后是否回到原点或者改变了方向
    bool isRobotBounded(string instructions) {
         int x = 0, y = 0; // x, y location
        int i = 0;        // robot's direction
        int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // 4 directions
 
        for(int j = 0; j < instructions.size(); j++)
        {
            if(instructions[j] == 'R')
                i = (i + 1) % 4;
            else if(instructions[j] == 'L')
                i = (i + 3) % 4;
            else { // G: update x, y
                x += d[i][0];
                y += d[i][1];
            }
        }
 
        return (x == 0 && y == 0) || i > 0; // back to origin or facing not north
    }
};