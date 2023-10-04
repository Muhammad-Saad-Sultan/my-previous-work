#include <iostream>
using namespace std;

const int SCREEN_WIDTH = 80;
const int SCREEN_HEIGHT = 80;

int main() {
  // Declare variables
  int radius, center_x, center_y;

  // Prompt the user to enter the radius and position of the center of the circle
  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;
  std::cout << "Enter the x-coordinate of the center of the circle: ";
  std::cin >> center_x;
  std::cout << "Enter the y-coordinate of the center of the circle: ";
  std::cin >> center_y;

  // Validate that the center of the circle is within the screen bounds
  if (center_x < 0 || center_x >= SCREEN_WIDTH || center_y < 0 || center_y >= SCREEN_HEIGHT) {
    std::cout << "Error: Center of circle is outside the screen." << std::endl;
    return 1;
  }

  // Initialize the screen to all spaces
  char screen[SCREEN_HEIGHT][SCREEN_WIDTH];
  for (int y = 0; y < SCREEN_HEIGHT; y++) {
    for (int x = 0; x < SCREEN_WIDTH; x++) {
      screen[y][x] = ' ';
    }
  }

  // Calculate the points on the circle using the midpoint circle algorithm
  int x = 0;
  int y = radius;
  int d = 1 - radius;
  while (y >= x) {
    screen[center_y + y][center_x + x] = '*';
    screen[center_y + y][center_x - x] = '*';
    screen[center_y - y][center_x + x] = '*';
    screen[center_y - y][center_x - x] = '*';
    screen[center_y + x][center_x + y] = '*';
    screen[center_y + x][center_x - y] = '*';
    screen[center_y - x][center_x + y] = '*';
    screen[center_y - x][center_x - y] = '*';
    if (d < 0) {
      d += 2 * x + 3;
    } else {
      d += 2 * (x - y) + 5;
      y--;
    }
    x++;
  }

  // Print the screen
  for (int y = 0; y < SCREEN_HEIGHT; y++) {
    for (int x = 0; x < SCREEN_WIDTH; x++) {
      std::cout << screen[y][x];
    }
    std::cout << std::endl;
  }

  return 0;
}
