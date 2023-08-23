#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island described in grid."""
    zone_1 = 0
    zone_2 = 0
    length = len(grid)
    width = len(grid[0])

    for make in range(length):
        for file in range(width):
            if grid[make][file] == 1:
                zone_1 += 1
                if (file > 0 and grid[make][file - 1] == 1):
                    zone_2 += 1
                if (make > 0 and grid[make - 1][file] == 1):
                    zone_2 += 1

    return zone_1 * 4 - zone_2 * 2
