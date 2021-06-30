import collections

# def solution(participant, completion):
#     answer = ''
    
#     participant.sort()
#     completion.sort()

#     for p, c in zip(participant, completion):
#         if p != c:
#             return p

#     return participant.pop()

def solution(participant, completion):
    ans = collections.Counter(participant) - collections.Counter(completion)

    return list(ans)[0]


print(solution(["leo", "kiki", "eden"], ["eden", "kiki"]))

#Counter는 해시 가능한 객체를 세기 위한 dict 서브 클래스입니다. 요소가 딕셔너리 키로 저장되고 개수가 딕셔너리값으로
#저장되는 Collections입니다. 개수는 0이나 음수를 포함하는 임의의 정숫값이 될 수 있습니다.