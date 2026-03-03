def average(array):
    # your code goes here
    arr=set(array)
    n=len(arr)
    m=sum(arr)
    return float(m/n)
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
