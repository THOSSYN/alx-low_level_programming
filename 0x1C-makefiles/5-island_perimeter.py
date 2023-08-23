#!/usr/bin/python3

def island_perimeter(grid):
    """Returns the perimeter of the island in a grid"""
    perimeter = 0
    cols = len(grid[0])
    rows = len(grid)
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 0:
                continue
            perimeter += 4
            if i > 0 and grid[i - 1][j] == 1:
                perimeter -= 2
            if j > 0 and grid[i][j - 1] == 1:
                perimeter -= 2

    return perimeter
