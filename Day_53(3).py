# Enter your code here. Read input from STDIN. Print output to STDOUT
T=int(input())
for i in range(T):
    try:
        line = input().split()
        a, b = line[0], line[1]
        print(int(a)//int(b))
    except ZeroDivisionError as e:
        print("Error Code:",e)
    except ValueError as e:
        print("Error Code:",e)
