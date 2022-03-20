/*
* Basic Node initializing file
*/

#pragma once //define things ONCE 

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

struct RoadGraphNode{
    string name;
    vector<RoadGraphNode *> neighbors;
    void addEdge(RoadGraphNode *destination){
        //checking for uniqueness
        this->neighbors.push_back(destination);
    }

    //Dijkstra’s Algorithim
    int minDist(int dist[], bool visit[]){
        int min = INT_MAX, index;

        for (int i = 0; i < 6; i++){
            if (visit[i] == false && dist[i] <= min){
                min = dist[i];
                index = i;
            }
        }
        return index;
    }
    
    void shortPath(int RoadGraph[6][6], int source){
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

    string printScreen(){
        string result = "";
        result += "Name: " + this->name + " {";
        for (auto neighbor: this->neighbors){
            result += neighbor->name + ", ";
        }
        return result;  //display the graph to the user
    }
};