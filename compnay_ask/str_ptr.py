def pat(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print("* ", end="")
        print("")
    
n = 5
pat(n)
