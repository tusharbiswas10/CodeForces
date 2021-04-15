def sol(a, b, c, d):


    str = [[0 for k in range(d+1)] for l in range(c+1)]


    res = 0
    total = 0

    for i in range(c + 1):
        for j in range(d + 1):
            if (i == 0 or j == 0):
                str[i][j] = 0
            elif (a[i-1] == b[j-1]):
                str[i][j] = str[i-1][j-1] + 1
                res = max(res, str[i][j])
            else:
                str[i][j] = 0

    total = (c-res)+(d-res)

    return total




t = int(input())
for i in range (t):
    a = input()
    b = input()
    c = len(a)
    d = len(b)
    print(sol(a, b, c, d))
