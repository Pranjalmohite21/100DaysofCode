n = int(input())
s = set(map(int, input().split()))
N=int(input())
for i in range(N):
    command=input().split()
    a=command[0]
    match a:
        case "remove":
            s.remove(int(command[1]))
        case "discard":
            s.discard(int(command[1]))
        case "pop":
            s.pop()
        case _:
            print("invalid command")
print(sum(s))
