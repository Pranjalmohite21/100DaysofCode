if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr=list(arr)
    max1=max(arr)
    arr=[i for i in arr if i!=max1]
    print(max(arr))