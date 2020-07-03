#!/usr/bin/python3
"""Island interpreter perimeter"""


def island_perimeter(grid):
    """island_perimeter function to find the perimeter

    Args:
        grid ([list of lists]): grid with water and islands
    """
    prev_row = 0
    next_row = 0
    left_col = 0
    right_col = 0
    perimeter = 0
    row1 = 0
    for row in grid:
        col1 = 0
        for col in row:
            actual_pos = col
            if actual_pos == 1:
                prev_row = grid[row1 - 1][col1]
                next_row = grid[row1 + 1][col1]
                left_col = grid[row1][col1 - 1]
                right_col = grid[row1][col1 + 1]
                if next_row == 0:
                    perimeter += 1
                if prev_row == 0:
                    perimeter += 1
                if left_col == 0:
                    perimeter += 1
                if right_col == 0:
                    perimeter += 1
            col1 += 1
        row1 += 1
    return perimeter
