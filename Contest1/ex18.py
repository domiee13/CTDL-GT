n = int(input())
s = int(input())
arr = []

for i in range(n):
    arr.append(int(input()))

subArr = [arr[i:j] for i in range(0,len(arr)) for j in range(i,len(arr)+1)]
res = []
for i in subArr:
    if(sum(i)==s):
        res.append(len(i))
if(len(res)==0):
    print(-1)
else:
    print(min(res))