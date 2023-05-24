#!/usr/bin/python3

"""
    this module contains a function that computes the \
    perimeter of an island
"""


def island_perimeter(grid):
    """
        this function returns the perimeter of \
        the island described in grid
    """

    prm = 0
    row_len = len(grid[0])
    grid_prm = len(grid) * len(grid[0])

    for i in range(len(grid)):
        cell = 4

        for j in range(row_len):
            if grid[i][j] == 1:
                cell -= 1

        for j in range(row_len):
            if grid[i][j] == 1:
                cell += 1
                break

        prm += cell

    return grid_prm - prm
            
