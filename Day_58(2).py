# Enter your code here. Read input from STDIN. Print output to STDOUT
M=int(input())
a=set(map(int,input().split()))
N=int(input())
b=set(map(int,input().split()))
c=a.symmetric_difference(b)
for val in sorted(c):
    print(val)
