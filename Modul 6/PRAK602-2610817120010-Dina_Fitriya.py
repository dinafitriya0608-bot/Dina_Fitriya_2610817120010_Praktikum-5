n = int(input())
zetsu = list(map(int, input().split()))

results = []
for i in range(n):
    label = i + 1
    results.append(zetsu[i] * label)

print(*results)