# Enter your code here. Read input from STDIN. Print output to STDOUT
N=int(input())
country=[]
for i in range(N):
    x=input()
    country.append(x)
print(len(set(country)))    

