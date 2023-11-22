#!/usr/bin/python3
"""island permiter problem solving
"""


def island_perimeter(grid):
    """
    calc the Island perimeter

    perim:
        grid (list): An 0's and 1's array that represents an island (1)
        sourrounded by water (0)

    Returns:
        The island's perimeter
    """
    perim = 0
    r,c = len(grid), len(grid[0])

    for i in range(r):
        for j in range(c):
            if grid[i][j] == 0: continue
            perim+=4
            if i > 0: perim -= grid[i-1][j]
            if j > 0: perim -= grid[i][j-1]
            if i < r-1: perim -= grid[i+1][j]
            if j < c-1: perim -= [i][j+1]
    return perim