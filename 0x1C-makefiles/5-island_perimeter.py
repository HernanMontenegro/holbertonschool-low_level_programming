#!/usr/bin/python3
'''Returns the perimeter of the island'''


def island_perimeter(grid):
    '''Func Returns the perimeter of the island'''
    count = 0
    for row in range(0, len(grid)):
        for i in range(0, len(grid[row])):
            if (grid[row][i] == 0):
                continue

            if (row - 1 < 0):
                count += 1
            else:
                if (grid[row - 1][i] == 0):
                    count += 1

            if (row + 1 >= len(grid)):
                count += 1
            else:
                if (grid[row + 1][i] == 0):
                    count += 1

            if (i - 1 < 0):
                count += 1
            else:
                if (grid[row][i - 1] == 0):
                    count += 1

            if (i + 1 >= len(grid[row])):
                count += 1
            else:
                if (grid[row][i + 1] == 0):
                    count += 1

    return count
