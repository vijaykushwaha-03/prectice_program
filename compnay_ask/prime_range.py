 
 
def is_prime(num):
    if num < 2:
        return False
        
    for i in range(2,num):
        if num%i == 0:
            return False
    return True

def prime_range(st,ed):
    
    prim = []
    for i in range(st,ed+1):
        if is_prime(i):
            prim.append(i)
    return prim
            

st = 10
ed = 30

ran = prime_range(st,ed)
print(ran)