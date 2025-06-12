t = int(input())
for _ in range(t):
    n = int(input())
    ar = list(map(int,input().split()))
    my_set = set(ar)
    if(len(my_set)>2):print("No")
    else:
        cnt = ar.count(ar[0])
        rem = n-cnt
        if(abs(cnt-rem)<=1 or cnt==n):print("Yes")
        else: print("No")