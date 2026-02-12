if __name__ == '__main__':
    N = int(input())
    number=[]
    
    for i in range(N):
        command=input().split()
        if command[0] == "insert":
            number.insert(int(command[1]), int(command[2]))

        elif command[0] == "print":
            print(number)

        elif command[0] == "remove":
            number.remove(int(command[1]))

        elif command[0] == "append":
            number.append(int(command[1]))

        elif command[0] == "sort":
            number.sort()

        elif command[0] == "pop":
            number.pop()

        elif command[0] == "reverse":
            number.reverse()
