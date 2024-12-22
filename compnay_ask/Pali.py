
str = "BaaB"

print(str)

lstr = str.lower()

print(lstr)

rev = lstr[::-1]
print(rev)

if lstr == rev:
    print("Palin")
else:
    print("not Pali")