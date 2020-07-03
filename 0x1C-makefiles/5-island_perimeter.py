#!/urs/bin/python3
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
    row = 0
    perimeter = 0
    while row < len(grid):
        col = 0
        while col < len(grid[row]):
            actual_pos = grid[row][col]
            if actual_pos == 1:
                try:
                    prev_row = grid[row - 1][col]
                except Exception:
                    prev_row = 0
                try:
                    next_row = grid[row + 1][col]
                except Exception:
                    next_row = 0
                try:
                    left_col = grid[row][col - 1]
                except Exception:
                    left_col = 0
                try:
                    right_col = grid[row][col + 1]
                except Exception:
                    right_col = 0
                if next_row == 0:
                    perimeter += 1
                if prev_row == 0:
                    perimeter += 1
                if left_col == 0:
                    perimeter += 1
                if right_col == 0:
                    perimeter += 1
            col += 1
        row += 1
    return perimeter
