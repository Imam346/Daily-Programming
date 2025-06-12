vec = []
n = int(input())
for _ in range(n):
    s = input()
    vec.append(s)

# print(*vec)
ans = []
my_set = set()
for i in range(n-1,-1,-1):
    if(vec[i] not in my_set):
        ans.append(vec[i])
        my_set.add(vec[i])

for val in ans: print(val)