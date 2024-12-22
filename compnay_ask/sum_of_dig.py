
def prime(n):
    sum = 0
    while n != 0:
        rem = n%10
        sum = rem+sum
        n //= 10
        
    return sum
    
print(prime(523))