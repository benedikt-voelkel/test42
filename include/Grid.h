#ifndef _GRID_H_
#define _GRID_H_

class Grid
{
  public:
    // standard constructor
    Grid(int nNodes);
    // destructor
    virtual ~Grid() = default;

    void populateNode(int iNode);

  private:
    // Just never use the default constructor
    Grid();

    // check if valid node
    bool isNodeValid(int iNode) const;
    // check if node is populated
    bool isNodePopulated(int iNode) const;

  private:
    // all nodes, we work with raw pointers for now cause we know what we do and will never expose them
    std::vector<bool> mNodes;
};

#endif /* _GRID_H_ */
