#include <iostream>

#include "Grid.h"

Grid::Grid(int nNodes)
 : mNodes(nNodes, false)
 {}

void Grid::populateNode(int iNode)
{
  if(!isValidNode(iNode) || !isNodeFree(iNode)) {
    std::cerr << "The requested node " << iNode << " cannot be populated." << std::endl;
    exit(1);
  }
  mNodes[iNode] = true;
}
bool Grid::isValidNode(int iNode)
{
  return iNode > 0 && iNode < mNodes.size();
}

bool Grid::isNodePopulated(int iNode) const
{
  // This assumes iNode is a valid index
  return !mNodes[iNode];
}
