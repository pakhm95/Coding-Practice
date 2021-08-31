# module load
import random

def CardRank(cards):
    paircount = 0
    for n1 in range(0,4) :
        for n2 in range(n1+1,5) :
            if cards[n1][1] == cards[n2][1] :
                paircount += 1

    num = [cards[k][1] for k in range(5)]
    num.sort()

    straightOX = False

    if paircount == 0 :
        if (num[4]-num[0]) == 4 :
            straightOX = True
        if num[0] == 1 and num[1] == 10 :
            straightOX = True

    suit = [cards[k][0] for k in range(5)]
    suit.sort()

    flushOX = False

    if straightOX and flushOX :
        rank = 1
    elif paircount == 6 :
        rank = 2
    elif paircount == 4 :
        rank = 3
    elif flushOX :
        rank = 4
    elif straightOX :
        rank = 5
    elif paircount == 3 :
        rank = 6
    elif paircount == 2 :
        rank = 7
    elif paircount == 1 :
        rank = 8
    else :
        rank = 9
    return rank

def DisplayResult(cards_A, ranks_A, cards_B, ranks_B) :
    print(ranks_A, cards_A)
    print(ranks_B, cards_B)
    if ranks_A < ranks_B :
        print("선수 A가 이겼습니다.")
    elif ranks_B < ranks_A :
        print("선수 B가 이겼습니다.")
    else :
        print("비겼습니다.")

# Money setting
Money = 2000

# Card deck set
deck = [(suit,k) for suit in ["S","H","D","C"] for k in range(1,14)]

while True :
    # deck shuffle
    random.shuffle(deck)

    # Betting 1 to 5
    for n in [1,2,3,4,5] :
        answer = input("베팅하시겠습니까? (Y/N)")
        if answer == 'n' or answer == 'N' :
            break
        Money = Money - 10
        if n == 1 :
            cards_A = [ deck[k] for k in range(0, 2)] # Computer
            cards_B = [ deck[k] for k in range(2, 4)] # Player
        elif n < 4 :
            cards_A.append(deck[n*2])    # 4,6,8
            cards_B.append(deck[n*2+1])  # 5,7,9
        elif n == 4 :
            hiddencard = deck[n*2]
            cards_B.append(deck[n*2+1])
        else :
            cards_A.append(hiddencard)
            rank_A = CardRank(cards_A)
            rank_B = CardRank(cards_B)
            if rank_B < rank_A :
                Money = Money + 100
                print('당신이 이겼습니다.')
            elif rank_A == rank_B :
                print('비겼습니다.')
            else :
                print('내가 이겼습니다.')
        print("Money = ", Money)
        print("computer: ", cards_A)
        print("player  : ", cards_B)
    
    answer = input("게임을 더 하시겠습니까? (Y/N)")
    if answer == 'n' or answer == 'N':
        break
