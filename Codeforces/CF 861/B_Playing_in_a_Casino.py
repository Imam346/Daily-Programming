t = int(input())
for _ in range(t):
    n,m = map(int,input().split())
    mat = []
    for i in range(n):
        row = list(map(int,input().split()))
        mat.append(row)
    
    ans = 0
    for j in range(m):
        col = sorted(mat[i][j] for i in range(n))
        pref = 0
        for i in range(n):
            ans+=(i*col[i] - pref)
            pref+=col[i]

    print(ans)