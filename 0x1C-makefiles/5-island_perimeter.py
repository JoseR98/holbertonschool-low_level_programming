#!/usr/bin/python3
"""Island interpreter perimeter"""


def island_perimeter(grid):
    """island_perimeter function to find the perimeter

    Args:
        grid ([list of lists]): grid with water and islands
    """
    perimeter = 0
    for row in range(1, len(grid) - 1):
        for col in range(1, len(grid[row]) - 1):
            actual_pos = grid[row][col]
            if actual_pos == 1:
                if grid[row - 1][col] == 0:
                    perimeter += 1
                if grid[row + 1][col] == 0:
                    perimeter += 1
                if grid[row][col - 1] == 0:
                    perimeter += 1
                if grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
