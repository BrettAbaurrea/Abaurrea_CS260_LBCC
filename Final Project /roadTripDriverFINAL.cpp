/*
* Driver (mail) file
*/

#include <iostream>

#include "roadTripNodeFINAL.hpp"
#include "roadTripFINAL.hpp"

using std::cout;
using std::endl;

int main(){
    RoadGraphNode sacramento{"Sacramento = ", vector<RoadGraphNode *>()};
    RoadGraphNode redding{"Redding = ", vector<RoadGraphNode *>()};
    RoadGraphNode weed{"Weed = ", vector<RoadGraphNode *>()};

    RoadGraphNode grantsPass{"Grants Pass = ", vector<RoadGraphNode *>()};
    RoadGraphNode medford{"Medford = ", vector<RoadGraphNode *>()};

    sacramento.neighbors.push_back(&redding);   //node1->node2
    redding.neighbors.push_back(&weed);         //node2->node3
    //weed leads to 2 different nodes
    weed.neighbors.push_back(&medford);         //node3->node4
    weed.neighbors.push_back(&grantsPass);      //node3->node5
}