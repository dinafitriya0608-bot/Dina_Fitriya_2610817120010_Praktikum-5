n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    line1 = list(map(int, input().split()))
    line2 = list(map(int, input().split()))

    result = []
    for i in range(n1):
        result.append(line1[i] * line2[i])

    print(*result)