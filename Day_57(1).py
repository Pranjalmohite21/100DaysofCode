# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
#for i in range(n):
english=input().split()
english=set(english)
b=int(input())
#for i in range(b):
french=input().split()
french=set(french)
z=len(english.intersection(french))
print(z)
