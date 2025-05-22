t = int(input())
for _ in range(t):
    n = int(input())
    ar = list(map(int,input().split()))
    i=0
    while(i<n):
        if(ar[i]!=0): break
        i+=1
    j=n-1
    while(j>=0):
        if(ar[j]!=0): break
        j-=1
    if(i>j): print(0)
    else:
        ok=True
        while(i<j):
            if(ar[i]==0): 
                ok=False
                break
            i+=1
        if(ok): print(1)
        else: print(2)