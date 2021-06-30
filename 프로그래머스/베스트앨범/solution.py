from collections import defaultdict

def solution(genres, plays):
    answer = []

    g_plays = defaultdict(int)
    g_songs = defaultdict(lambda: [])

    i = 0
    for g, p in zip(genres, plays):
        g_plays[g] += p
        g_songs[g].append((i,p))
        i+=1
    
    sorted_g = sorted(g_plays.items(), key=(lambda x: x[1]), reverse=True)

    for g in sorted_g:
        sorted_song = sorted(g_songs[g[0]], key=(lambda x: x[1]), reverse=True)
        answer.append(sorted_song[0][0])
        if (len(g_songs[g[0]]) > 1):
            answer.append(sorted_song[1][0])

    return answer


print(solution(["classic", "pop", "classic", "classic", "pop"],[500, 600, 150, 800, 2500]))

