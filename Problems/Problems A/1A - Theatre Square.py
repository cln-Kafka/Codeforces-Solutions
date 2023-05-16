import math
n, m, a = [int(x) for x in input().split()]
cnt = math.ceil(n/a) * math.ceil(m/a)
print(cnt)