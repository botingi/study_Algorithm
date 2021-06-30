def solution(bridge_length, weight, truck_weights):
    answer = 0

    time = []
    truck = []
    idx = 0

    while True:
        answer += 1

        if len(truck) != 0:
            if answer - time[0] == bridge_length:
                time.pop(0)
                truck.pop(0)
        
        if weight - sum(truck) >= truck_weights[idx]:
            if(idx == len(truck_weights)-1):
                answer += bridge_length
                return answer
            
            time.append(answer)
            truck.append(truck_weights[idx])
            idx+=1


print(solution(2,10,[7, 4, 5, 6]))
