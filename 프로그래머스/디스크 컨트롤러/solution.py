def solution(jobs):
    answer = 0
    time = 0
    start = 0
    size = len(jobs)

    jobs.sort(key = lambda x: x[1])

    while len(jobs)>0:
        for i in range(len(jobs)):
            if(jobs[i][0] <= start):
                start += jobs[i][1]
                time += start -jobs[i][0]
                jobs.pop(i)
                break
            if i == (len(jobs)-1):
                start += 1  
    answer = time//size
    return answer


print(solution([[0, 3], [1, 9], [2, 6]]	))