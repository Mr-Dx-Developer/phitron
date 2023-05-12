#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  int matrix[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Print the last row
  for (int i = 0; i < m; i++) {
    printf("%d ", matrix[n - 1][i]);
  }
  printf("\n");

  // Print the last column
  for (int i = 0; i < n; i++) {
    printf("%d ", matrix[i][m - 1]);
  }
  printf("\n");

  return 0;
}
