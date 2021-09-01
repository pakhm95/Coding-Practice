#https://www.acmicpc.net/problem/2941 - 크로아티아 알파벳
croatia = ["c=","c-","dz=","d-","lj","nj","s=","z="]
alpabet = input()[:100]

swich = 0
for char in croatia:
    swich = alpabet.find(char)
    if(swich != -1):
        alpabet = alpabet.replace(char,"1")
print(len(alpabet))