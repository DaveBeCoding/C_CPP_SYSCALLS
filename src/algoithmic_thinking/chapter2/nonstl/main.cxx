#include <iostream>
#include "externals/std_math/test.hpp" //Part of Automation Project-Script <starterpack++> ... ignore = true;

using namespace std;
int vertArr[20][20]; //adjacency matrix init 0
int count = 0;
void displayMatrix(int v) {
   int row, column;
   for(row = 0; row < v; row++) {
      for(column = 0; column < v; column++) {
         cout << vertArr[row][column] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {       //function to add edge into the matrix
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}
main(int argc, char* argv[]) {
   int v = 6;    //there are 6 vertices in the graph
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);
   displayMatrix(v);
}
