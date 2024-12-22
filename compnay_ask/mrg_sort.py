def mrg(ls3):
    
    n = len(ls3)
    
    for i in range(n):
        for j in range(0,n-i-1):
            if ls3[j] > ls3[j+1]:
                ls3[j], ls3[j+1] = ls3[j+1], ls3[j]
        
    return ls3
    
ls1 = [1,2,3,6,7,8]
ls2 = [4,5,9]

ls3 = ls1+ls2
print(ls3)
print(mrg(ls3))