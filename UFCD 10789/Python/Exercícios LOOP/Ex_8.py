num = 0

while num < 1000:
    num += 1
    if num %10 == 0:
        print(f"{num} ")
        
num_ = 15

while num_ < 1000:
    if num_ % 5 == 0 and num_ % 10 != 0:
        print(f"{num_} ")
    num_ += 1