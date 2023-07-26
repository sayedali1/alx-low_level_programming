#!/usr/bin/python3

def island_perimeter(grid):
    """ fun that calc the perimeter of a given matrix """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                try:
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                    if grid[i][j - 1] == 1:
                        perimeter -= 1
                    if grid[i][j + 1] == 1:
                        perimeter -= 1
                except IndexError:
                    pass

    return perimeter
