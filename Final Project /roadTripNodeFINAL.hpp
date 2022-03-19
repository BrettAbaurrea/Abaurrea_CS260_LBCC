/*
* Basic Node initializing file
*/

#pragma once //define things ONCE 

#include <string>
#include <vector>

using std::string;
using std::vector;

struct RoadGraphNode{
    string city;
    vector<RoadGraphNode *> neighbors;
    void addEdge(RoadGraphNode *destination){
        //checking for uniqueness
        this->neighbors.push_back(destination);
    }
    string printScreen(){
        string result = "";
        result += "Name: " + this->name + " {";
        for (auto neighbor: this->neighbors){
            result += neighbors->name + ", ";
        }
        return result;  //display the graph to the user
    }
}