t = int(input())

for i in range(t):
    tmp = input()
    s = input()
    a = s.split(" ")
    res = [i for i in a if i=='0']
    print(len(res))