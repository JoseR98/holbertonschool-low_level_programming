#include "holberton.h"

/**
* alloc_grid - Fill an array of 2 dimensions
* @width:
* @height:
* Return: integer pointer to a 2 dimension array
*/
int **alloc_grid(int width, int height)
{
      int i;
      int **p;

      if (width <= 0 || height <= 0)
      {
            return (NULL);
      }
      p = malloc(sizeof(p) * height);
      if (p == NULL)
      {
            return (NULL);
      }
      for (i = 0; i < height; i++)
      {
            p[i] = malloc(sizeof(int) * width);
            if (p[i] == NULL)
            {
                  return (NULL);
            }
      }
      return (p);
}