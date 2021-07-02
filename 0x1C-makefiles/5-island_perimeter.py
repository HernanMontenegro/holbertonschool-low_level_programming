#!/usr/bin/python3
'''Returns the perimeter of the island'''


def island_perimeter(grid):
    '''Func Returns the perimeter of the island'''
    count = 0
    for row in range(1, len(grid) - 1):
        for i in range(1, len(grid[row]) - 1):
            if (grid[row][i] == 1):
                # izquierda
                if (grid[row][i - 1] == 0):
                    count += 1
                # derecha
                if (grid[row][i + 1] == 0):
                    count += 1
                # arriba
                if (grid[row - 1][i] == 0):
                    count += 1
                # abajo
                if (grid[row + 1][i] == 0):
                    count += 1

    return count
