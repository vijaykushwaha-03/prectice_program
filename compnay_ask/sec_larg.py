 
 
 
def larg(ls):
    
    n = len(ls)
    lg = 0
    slg = 0
    for i in range(n):
        if i > lg:
            slg = lg
            lg = i
        if i > slg:
            slg = i
            
    return slg
 
ls = [1,2,3,4,5,6,7]

print(larg(ls))