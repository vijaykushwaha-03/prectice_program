def dec_to_bin(dec):
    bina = 0
    plc = 1
    while dec > 0:
        rem = dec%2
        bina += rem * plc
        dec //= 2
        plc *= 10
    return bina


dec = 11
print(dec_to_bin(dec))