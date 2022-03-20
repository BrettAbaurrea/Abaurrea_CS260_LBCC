/*
* Header file for main class
*/

#include <string>
#include <vector>

#include "roadTripNodeFINAL.hpp"

using std::vector;

class RoadGraph{
    private:
        vector<RoadGraphNode *> nodes;
    
    public:
        //default constructor
        RoadGraphNode *addNode(string newName);
        RoadGraphNode *addNode(RoadGraphNode *newNode);
        string printScreen();
        int minDist(int dist[], bool visit[]);
        void shortPath(int RoadGraph[6][6], int source);
};