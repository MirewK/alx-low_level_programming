#!/usr/bin/python3
"""Defines and returns the perimeter of the island"""


def island_perimeter(grid):
    """Grid Represents 0 for water and 1 for land and return perimiter

    Args:
        grid (list):list of integers representing an island.

    Returns:
        Island perimeter defined in grid
    """

    w = len(grid[0])
    h = len(grid)
    edges = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1

    return size * 4 - edges * 2
