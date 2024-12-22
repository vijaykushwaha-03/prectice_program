def vow(str):
    cnt = 0
    for i in str:
        if i.lower() in 'aeiou':
            cnt += 1
            
    return cnt

str = "aeiou wjd"
print(vow(str))