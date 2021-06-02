#ifndef _GRID_RECTANGULAR_H_
#define _GRID_RECTANGULAR_H_

#include "Grid.h"

class GridRectangular : public Grid
{
  /*
  _________________________
  |     |     |     |     |
  |  8  |  9  |  10 |  11 |
  |_____|_____|_____|_____|
  |     |     |     |     |
  |  4  |  5  |  6  |  7  |
  |_____|_____|_____|_____|
  |     |     |     |     |
  |  0  |  1  |  2  |  3  |
  |_____|_____|_____|_____|

  */
  // standard constructor
  GridRectangular(int nColumns, int nRows);
  // constructing immediately a square
  GridRectangular(int nColumnsRows);

  // destructor
  virtual ~GridRectangular() = default;

  // provide another interface to populate a node which makes sense from the
  // rectangular point of view
  void populate(int iNodeCol, int iNodeRow);

  private:
    // Just never use the default constructor
    GridRectangular();

  private:
    int mNColumns;
    int mNRows;
};



#endif /* _GRID_RECTANGULAR_H_ */
