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
	col = 0
	perimeter = 0
	while row < len(grid):
		while col < len(grid[row]):
			actual_pos = grid[row][col]
			print(grid[row])
			if actual_pos == 1:
				prev_row = grid[row - 1][col]
				next_row = grid[row + 1][col]
				left_col = grid[row][col - 1]
				right_col = grid[row][col + 1]
				if prev_row == 0 or next_row == 0:
					perimeter += 1
				if left_col == 0 or right_col == 0:
					perimeter += 1
			col += 1
		row += 1
	return perimeter
