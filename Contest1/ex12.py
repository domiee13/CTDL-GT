t = int(input())

def isFinal(arr):
    for i in range(len(arr)):
        if arr[i]==0:
            return False
    return True

def display(arr):
    for i in arr:
        print(i,end="")
    print()

def sinh(n):
    res = []
    if arr.count(1)==k:
        res.append(arr)
    while not isFinal(arr):
        j = len(arr)-1
        while j>=0 and arr[j]==1:
            j-=1 nguyên N, K (1 ≤ K ≤ N ≤ 16).
        if j>=0:
            arr[j]=1
        for i in range(j+1,len(arr)):
            arr[i]=0
        if arr.count(1)==k:
            res.append(arr.copy())    
    return res

for i in range(t):
    n= int(input())
    k= int(input())
    arr= [0 for i in range(n)]
    res = sinh(n)
    for i in res:
        display(i)
