import numpy
from numpy import linalg

matrix=[]
N=int(input())
for i in range(N):
    row = list(map(float, input().split()))
    matrix.append(row)
final=numpy.linalg.det(matrix)
print (round(final,2))
    
