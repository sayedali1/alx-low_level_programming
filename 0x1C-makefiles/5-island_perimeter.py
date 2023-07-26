#!/usr/bin/python3
""" 
Modul: island_perimeter
Return the perimeter of a given matrix
"""


def island_perimeter(grid):
    """ fun that calc the perimeter of a given matrix """
    islands = 0
    if len(grid) <= 100 and len(grid[0]) <= 100:
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                     islands += 1
  
    if islands == 0:
        return 0
    else:
        return  int(((4 * islands) / 2) + 2) 

