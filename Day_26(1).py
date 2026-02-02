import statistics
import math

n = int(input())
li = list(map(int, input().split()))
mean = sum(li) / n
li.sort()
if n % 2 == 0:
    median = (li[n//2 - 1] + li[n//2]) / 2
else:
    median = li[n//2]
mode = statistics.mode(li)
standard_dev = statistics.pstdev(li)
z = 1.96
lower = mean - z * (standard_dev / math.sqrt(n))
upper = mean + z * (standard_dev / math.sqrt(n))

print(round(mean, 1))
print(round(median, 1))
print(mode)
print(round(standard_dev, 1))
print(round(lower, 1), round(upper, 1))
