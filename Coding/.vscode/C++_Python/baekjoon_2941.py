#https://www.acmicpc.net/problem/2941 - 크로아티아 알파벳
croatia = ["c=","c-","dz=","d-","lj","nj","s=","z="]
alphabet = input()[:100]

swich = 0
for char in croatia:
    swich = alphabet.find(char)
    if(swich != -1):
        alphabet = alphabet.replace(char,"1")
print(len(alphabet))