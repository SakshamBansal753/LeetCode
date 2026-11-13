class Solution(object):
    def fullBloomFlowers(self, flowers, people):
    
            starts = sorted(flower[0] for flower in flowers)
            ends = sorted(flower[1] for flower in flowers)
    
            answer = []
            for time in people:
                started = bisect_right(starts, time)  # Flowers that have started
                ended = bisect_left(ends, time)        # Flowers that have already ended
                answer.append(started - ended)
            return answer
        