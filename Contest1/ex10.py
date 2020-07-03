t = int(input())

def binToGray(s):
    a = [i for i in s]
    b = []
    res = ""
    b.append(a[0]);
    for i in range(1,len(a)):
        if a[i]!=a[i-1]:
            b.append('1')
        else:
            b.append('0')
    for i in b:
        res+=i
    return res

for i in range(t):
    s = input()
    print(binToGray(s))