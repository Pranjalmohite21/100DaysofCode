def count_substring(string, sub_string):
    count=0
    possible_substtings=[string[i:j] for i in range(len(string)) for j in range(i + 1, len(string) + 1)]
    for string123 in possible_substtings:
        if(string123==sub_string):
            count+=1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
