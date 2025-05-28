n,k = map(int,input().split())
st = input()
my_set = set(st.split())
ar = []
for val in my_set:
    ar.append(int(val))
ar = sorted(ar)
# print(*ar)
n = len(ar)
x = 0
for i in range(min(n,k)):
    tmp = ar[i]-x
    if(tmp!=0):
        print(tmp)
        x+=tmp
    else: print(0)

if(k>n):
    for i in range(k-n):
        print(0)