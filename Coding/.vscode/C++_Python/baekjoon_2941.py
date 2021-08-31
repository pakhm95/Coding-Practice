croatia = ["c=","c-","dz=","d-","lj","nj","s=","z="]
alpabat = input("Enter Croatia Alpabat : ")[:100]
print("Input String : " + alpabat)

swich = 0
for char in croatia:
    swich = alpabat.find(char)
    if(swich != -1):
        alpabat = alpabat.replace(char,"1")
print(len(alpabat))