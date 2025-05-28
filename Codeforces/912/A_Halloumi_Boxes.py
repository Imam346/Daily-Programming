t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    ar = list(map(int,input().split()))
    
    flag = True
    if k==1:
        for i in range(n-1):
            if ar[i]>ar[i+1]:
                flag=False
                break
    if flag: print("YES")
    else: print("NO")