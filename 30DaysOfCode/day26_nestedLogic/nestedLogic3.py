[d1, m1, y1] = [int(x) for x in input().strip().split(' ')]
[d2, m2, y2] = [int(x) for x in input().strip().split(' ')]

if y1 > y2:
    print(10000)
elif y1 == y2:
    if m1 > m2:
        fine = 500 * (m1 - m2)
        print(fine)
    elif m1 == m2:
        if d1 > d2:
            fine = 15 * (d1 - d2)
            print(fine)
        else:
            print(0)
    else:
        print(0)
else:
    print(0)
