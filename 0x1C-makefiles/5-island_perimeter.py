#!/usr/bin/python3

"""
"""


def island_perimeter(grid):
    """
    """

    prm = 0
    grid_prm = len(grid) * len(grid[0])

    for i in range(len(grid)):
        cell = 4

        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                cell -= 1

        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                cell += 1
                break

        prm += cell

    return grid_prm - prm
            
