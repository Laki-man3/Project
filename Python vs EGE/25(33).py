for i in range(10):
    for j in range(10):
        x = "12345" + str(i) + "7" + str(j) + "8"
        x = int(x)
        if x%23 == 0:
            print(x, x//23)
