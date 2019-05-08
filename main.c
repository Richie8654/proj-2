#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int
main ()
{
  float image[5][5][3];
  int x, y;

  srand (0);
  for (y = 0; y < 5; y++)
    {
      for (x = 0; x < 5; x++)
	{
	  image[x][y][0] = (float) rand () / (float) INT_MAX;
	  image[x][y][1] = (float) rand () / (float) INT_MAX;
	  image[x][y][2] = (float) rand () / (float) INT_MAX;
	}
    }

  float r;
  int g;
  int b;
  int mean;
  image[x][y][0] = r;
  image[x][y][1] = g;
  image[x][y][2] = b;

  for (y = 0; y <= 1; y++)
    {
      for (x = 1; x < 6; x++)
	{
	  mean = (r + g + b) / 3.0;
	  r = mean;
	  g = mean;
	  b = mean;
	  printf ("%d %d: %f %f %f\n", x, y, r, g, b);
	}
    }

  return 0;
}
