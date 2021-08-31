deck = [(suit,k) for suit in ["S","H","D","C"] for k in range(1,14)]

import random
random.shuffle(deck)

cards = [ deck[k] for k in range(5)]

paircount = 0

for n1 in range(0,4):
    for n2 in range(n1+1,5):
        if cards[n1][1] == cards[n2][1]:
            paircount += 1

num = [cards[k][1] for k in range(5)]
num.sort()
straightox = False

if (paircount == 0) and ((num[4]-num[0]) == 4) or (num[0]==1 and num[1] == 10):
    straightox = True

suit = [cards[k][0] for k in range(5)]
suit.sort()
flushox = False
if suit[0] == suit[4]:
    flushox = True

if straightox and flushox:
    rank = 1
elif paircount == 6:
    rank = 2
elif paircount == 4:
    rank = 3
elif flushox:
    rank = 4
elif straightox:
    rank = 5
elif paircount == 3:
    rank = 6
elif paircount == 2:
    rank = 7
elif paircount == 1:
    rank = 8
else:
    rank = 9

print("Hands    --> ",cards)
print("Flush    --> ",flushox)
print("Straight --> ",straightox)
print("Pair     --> ",paircount)
print("Rank     --> ",rank)