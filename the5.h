#ifndef _THE_5_H_
#define _THE_5_H_

#include <iostream>
#include <climits>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_set>

using namespace std;

struct Room {
    
    int id;
    char content;
    vector<Room*> neighbors;
};



vector<int> maze_trace(vector<Room*> maze);

#endif
