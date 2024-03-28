#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): list of integers representing an island.
    Returns:
        Perimeter of the island defined in grid.
    """
    w = len(grid[0])
    h = len(grid)
    edges = 0
    sz = 0

    for k in range(h):
        for j in range(w):
            if grid[k][j] == 1:
                sz += 1
                if (j > 0 and grid[k][j - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][j] == 1):
                    edges += 1
    return sz * 4 - edges * 2
