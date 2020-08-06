n = int(input())

for i in range(n):
    s = input()
    arr = s.split(" ")
    res = [i[::-1] for i in arr]
    for i in res:
        print(i, end = " ")
    print()