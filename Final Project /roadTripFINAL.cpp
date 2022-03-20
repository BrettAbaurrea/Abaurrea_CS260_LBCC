#include <string>

#include "roadTripFINAL.hpp"

using std::string;

RoadGraphNode * RoadGraph::addNode(string newName){
    RoadGraphNode *newNode = new RoadGraphNode{newName, vector<RoadGraphNode *>()};

    this->nodes.push_back(newNode);

    return newNode;
}

RoadGraphNode * RoadGraph::addNode(RoadGraphNode *newNode){
    this->nodes.push_back(newNode);

    return newNode;
}

int RoadGraph::minDist(int dist[], bool visit[]){
    int min = INT_MAX, index;

    for (int i = 0; i < 6; i++){
        if (visit[i] == false && dist[i] <= min){
            min = dist[i];
            index = i;
        }
    }
    return index;
}

void RoadGraph::shortPath(int RoadGraph[6][6], int source){
    int dist[6];    //calculate minimum distance between each of the nodes
    bool visit[6];   //boolean to mark nodes visted/unvisited

    //Set all nodes with infinity distance EXCEPT for initial node then mark all as unvisited
    for (int i = 0; i < 6; i++){
        dist[i] = INT_MAX;
        visit[i] = false;
    }
    dist[source] = 0;    //source vertex is 0

    for (int i = 0; i < 6; i++){
        int min = minDist(dist, visit);
        visit[min] = true;
        for(int i = 0; i < 6; i++){
            //update minimum distance
            if(!visit[i] && RoadGraph[min][i] && dist[min] != INT_MAX && dist[min]+ RoadGraph[min][i] < dist[i]){
                dist[i] = dist[min] + RoadGraph[min][i];
            }
        }
    }
    cout << "Vertex Distance from Source " << endl;
}

string RoadGraph::printScreen(){
    string result = "";
    for(int i = 0; i < this->nodes.size(); ++i){
        result += this->nodes.at(i)->name + ", ";
    }
    return result;
}