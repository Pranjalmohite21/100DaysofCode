def swap_case(s):
    result=[]
    for char in s:
        if char.islower():
            result.append(char.upper())
        else:
            result.append(char.lower())
    return "".join(result)
    return s

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
