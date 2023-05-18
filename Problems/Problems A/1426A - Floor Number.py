t,n,x = 0, 0, 0
t = int(input())

for i in range(t):
    # n = int(input()).split()
    # x = int(input()).split()
    n, x = [int(x) for x in input().split()]

    if n == 1 or n == 2:
        print(1)
    elif n >= 3 and n < (x+2):
        print(2)
    else:
        #  i is number of floor
        i = 3
        for i in range(1001):
            minimum = x*(i-2) + 3
            maximum = x*(i-1) + 2
            if n >= minimum and n <= maximum:
                print(i)
                break