count = 0
bonatchi = [1, 1]

while count < 60:
    if count != 0 and count != 1:
        bonatchi.append(bonatchi[count - 1] + bonatchi[count - 2])
    count += 1

idx = 0

for n in bonatchi:
    if idx != 0 and idx != 1:
        print(f"{bonatchi[idx - 2]} + {bonatchi[idx - 1]} = {bonatchi[idx]}")
    idx += 1