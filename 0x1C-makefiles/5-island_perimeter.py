#!/usr/bin/python3
"""
Modul: island_perimeter
Return the perimeter of a given matrix
"""


def island_perimeter(grid):
    """ fun that calc the perimeter of a given matrix """
    islands = 0
    edges = 0
    if len(grid) <= 100 and len(grid[0]) <= 100:
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    islands += 1
                    if (j > 0 and grid[i][j - 1] == 1):
                        edges += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        edges += 1

    return 4 * islands - 2 * edges
