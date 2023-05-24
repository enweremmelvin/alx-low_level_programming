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

    new_grid = []

    for i in range(len(grid)):
        sub_list = []

        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                sub_list.append(grid[i][j])

        if len(sub_list) > 0:
            new_grid.append(sub_list)

    grid_len = len(new_grid)
    prm = 4 * grid_len

    return prm
