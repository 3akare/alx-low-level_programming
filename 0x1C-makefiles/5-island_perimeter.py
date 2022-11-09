#!/usr/bin/env python3
''' Technical Interview preparation '''

def island_perimeter_remake(grid):
    ''' returns the perimeter of the island described in grid '''
    i = len(grid) - 1
    j = len(grid[0]) - 1
    idx1, idx2, size, side = 0, 0, 0, 0
    
    while idx1 <= i:
        while idx2 <= j:
            if grid[idx1][idx2] == 1:
                size += 1
            if grid[idx1][idx2] == 1 and grid[idx1][idx2 - 1] == 1:
                side += 1
            if grid[idx1][idx2] == 1 and grid[idx1 - 1][idx2] == 1:
                side += 1
            idx2 += 1
        idx2 = 0
        idx1 += 1
    
    return (size * 4) - (side * 2)
