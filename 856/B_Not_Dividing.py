t = int(input())
for _ in range(t):
    n = int(input())
    ar = list(map(int,input().split()))
    # print(*ar) 
    for i in range(n):
        if(ar[i]==1): ar[i]=2
    for i in range(n-1):
        if(ar[i+1]%ar[i]==0):
            ar[i+1]+=1
    print(*ar)
    