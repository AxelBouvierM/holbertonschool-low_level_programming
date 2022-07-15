#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""
def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    largo = 0
    ancho = 0
    for l in range(len(grid)):
        for f in range(len(grid[l])):
            if grid[l][f] == 1 and grid[l][f -1] == 0:
                largo += 2
            if grid[l][f] == 1 and grid[l + 1][f] != 1:
                ancho += 2
    return largo + ancho