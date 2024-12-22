def bina_to_dec(bina):
    dec = 0
    power = 0
    
    while bina > 0:
        lst = bina % 2
        dec += lst * (2 ** power)
        bina //= 10
        power += 1
    return dec
  
    
bina = 1011
print(bina_to_dec(bina))