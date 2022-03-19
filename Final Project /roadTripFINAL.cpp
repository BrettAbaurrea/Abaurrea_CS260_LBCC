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

string RoadGraph::printScreen(){
    string result = "";
    for(int i = 0; i < this->nodes.size(); ++i){
        result += this->nodes.at(i)->name + ", ";
    }
    return result;
}