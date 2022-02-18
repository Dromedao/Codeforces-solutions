i = 0
y = [0,0]
flag = True
while (i < 5):
    x = input()
    x = x.split()
    if flag != False:
        y[1] += 1
    if "1" in x:
        for element in x:
            y[0] += 1
            if element == "1":
                break
        flag = False
    i += 1
if y[0] != 3:
    y[0] = abs(3-y[0])
else:
    y[0] = 0
if y[1] != 3:
    y[1] = abs(3-y[1])
else:
    y[1] = 0
y = y[0] + y[1]
print(y)