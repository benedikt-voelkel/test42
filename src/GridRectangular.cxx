#include <iostream>

#include "GridRectangular.h"

GridRectangular::GridRectangular(int nColumns, int nRows)
  : Grid(nColumns * nRows),
    nColumns(nColumns),
    nRows(nRows)
  {}

GridRectangular::GridRectangular(int nColumnsRows)
  : GridRectangular(nColumnsRows, nColumnsRows)
  {}

GridRectangular::populate(int iNodeCol, int iNodeRow)
{
  populate(iNodeRow * mNColumns + iNodeCol);
}
