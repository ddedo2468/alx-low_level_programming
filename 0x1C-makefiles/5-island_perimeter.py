#!/usr/bin/python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jul  3 09:29:55 2020

@author: Robinson Montes
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
    width = len(grid)
    height = len(grid[0])
    perim = 0
    for i in range(1, width - 1):
        for j in range(1, height - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perim += 1
                if grid[i + 1][j] == 0:
                    perim += 1
                if grid[i][j - 1] == 0:
                    perim += 1
                if grid[i][j + 1] == 0:
                    perim += 1
    return perim