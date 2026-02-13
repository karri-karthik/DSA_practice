#Last_digit

def NumberOfDigits(n):
    num = n
    while num >0:
        last_digit = num %10
        print(last_digit)
        num = num//10
    return num
    
print(NumberOfDigits(5842))


#count the number of digits in a number

def CountDigits(n):
    count = 0
    num = n 
    while num >0:
        count = count +1
        num = num//10
        
    return count
    
print(CountDigits(795600))


#Panlindrome number

def palindorme(n):
    num = n
    result = 0
    while  num >0:
        num = num %10
        result = result *10 + num 


        
