#!/usr/bin/python3
"""Island interpreter perimeter"""


def island_perimeter(grid):
    """island_perimeter function to find the perimeter

    Args:
        grid ([list of lists]): grid with water and islands
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            actual_pos = grid[row][col]
            if actual_pos == 1:
                if row - 1 == -1 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row + 1 == len(grid) or grid[row + 1][col] == 0:
                    perimeter += 1
                if col - 1 == -1 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col + 1 == len(grid[row]) or grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
