/* THIS IS THE MAIN SOURCE FILE FOR THE EXECUTABLE */

int main(int argc, char* argv[])
{
  std::cout << "PLAY THE GAME OF LIFE" << std::endl;

  // Create a 5x5 square grid
  GridRectangular grid(5);

  grid.populateNode(1);
}
