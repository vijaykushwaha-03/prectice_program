def pat(n):
    for i in range(0,n):
        for j in range(i,n):
            print("*",end="")
        print()
        
pat(5)