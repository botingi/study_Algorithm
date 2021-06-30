def solution(clothes):
    answer = {}

    for c in clothes:
        if(c[1] in answer): answer[c[1]] += 1
        else: answer[c[1]] = 1

    cnt = 1

    for i in answer.values():
        cnt *= (i+1)

    return cnt-1

print(solution([["crowmask", "face"], ["bluesunglasses", "face"], ["smoky_makeup", "face"]]))