//
// Created by xuyc on 2020/12/24.
//

#ifndef ALGS4_CPP_BFS_CYCLE_H
#define ALGS4_CPP_BFS_CYCLE_H
#include <queue>
#include <vector>
#include "graph.h"

class BreadthFirstSearchCycle {
public:
    BreadthFirstSearchCycle(const Graph &g);
    bool hasCycle();
private:
    void _bfs(const Graph &g, int v);
    bool _hasCycle;
    std::vector<int> _parent;
    std::vector<bool> _marked;
};


#endif //ALGS4_CPP_BFS_CYCLE_H
