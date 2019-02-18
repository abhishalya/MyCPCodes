t = int(input())

while t:
    t -= 1
    n = int(input())
    s = input()
    mx = 0
    ans = ""
    for i in range(0, n):
        if s.count(s[:i + 1]) >= mx:
            mx = s.count(s[:i + 1])
            ans = s[:i + 1]
    print(ans)
