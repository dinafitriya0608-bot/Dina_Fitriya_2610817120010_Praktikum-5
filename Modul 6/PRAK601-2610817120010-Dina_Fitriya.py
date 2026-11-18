line, column = map(int, input().split())
data = list(map(int, input().split()))

for i in range(line):
    beginning = i * column
    end = beginning + column
    print(*data[beginning:end])