
def solution(phone_book):
    phone_book.sort()
    for p1, p2 in zip(phone_book, phone_book[1:]):
        if p2.startswith(p1):
            return False
    return True

print(solution(["119", "97674223", "1195524421"]))

#startswith() 함수를 사용하여 시작문자열 확인
#zip을 통해서 리스트에서 앞,뒤 값을 비교하는 방법
#sort()함수는 정렬 후 반환값이 없고, sorted()함수는 정렬 후 반환값이 있다.

#아래와 같은 코드는 효율성테스트 3,4번에서 실패함
# def solution(phone_book):
#     answer = True

#     phone_book.sort(key=len)

#     for i in range(len(phone_book)):
#         for j in range(i+1,len(phone_book)):
#             if(phone_book[i] == phone_book[j][0:len(phone_book[i])]):
#                 return False

#     return answer

