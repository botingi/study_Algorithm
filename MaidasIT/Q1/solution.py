def solution(N, mine):
    answer = [[0]*N for i in range(N)]

    for m in mine:
        i = m[0]-1
        j = m[1]-1
        answer[i][j] = -1

        if i-1 >= 0 and j-1 >= 0:
            if [i, j] not in mine:
                answer[i-1][j-1] += 1
        if i-1 >= 0 and j >= 0:
            if [i, j+1] not in mine:
                answer[i-1][j] += 1
        if i-1 >= 0 and j+1 < N:
            if [i, j+2] not in mine:
                answer[i-1][j+1] += 1
        if i >= 0 and j-1 >= 0:
            if [i+1, j] not in mine:
                answer[i][j-1] += 1
        if i >= 0 and j+1 < N:
            if [i+1, j+2] not in mine:
                answer[i][j+1] += 1
        if i+1 < N and j-1 >= 0:
            if [i+2, j] not in mine:
                answer[i+1][j-1] += 1
        if i+1 < N and j >= 0:
            if [i+2, j+1] not in mine:
                answer[i+1][j] += 1
        if i+1 < N and j+1 < N:
            if [i+2, j+2] not in mine:
                answer[i+1][j+1] += 1

    return answer
