# import itertools

# def solution(N, K, T):
#     answer = 0

#     p = itertools.permutations(T,K)

#     for i in p:
#         max = 0

#         day = 1
        
#         for j in i:
#             if(j[0] <= day and j[1] >= day):
#                 max += 1
#             day += 1

#         if answer < max: answer = max
#         if answer == K:
#             return answer

#     return answer

def solution(N, K, T):
    answer = 0

    sorted_t = sorted(T, key=lambda x:(x[1],x[0]))

    day = 1
    for i in sorted_t:
        if(day > K): break
        else:
            if i[0] <= day and i[1] >= day:
                answer += 1
                day += 1
            else: continue
        
    return answer
        

print(solution(4,4,[[1, 3], [1, 1], [2, 3], [3, 4]]))

