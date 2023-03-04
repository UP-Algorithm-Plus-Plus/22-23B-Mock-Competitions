from operator import add, mul, sub

OPERATIONS = (add, mul, sub)

def dfs(neighbors, pair_to_result, result_to_pair, seen, u):
    seen[u] = True
    for v in neighbors[u]:
        if any(
            result_to_pair[v] == -1,
            not seen[result_to_pair[v]] and dfs(
                neighbors, pair_to_result, result_to_pair, seen, result_to_pair[v]
            )
        ):
            pair_to_result[u] = v
            result_to_pair[v] = u
            return True

def solve(n, m, neighbors):
    pair_to_result = list(-1 for _ in range(n))
    result_to_pair = list(-1 for _ in range(m))
    seen = list(False for _ in range(n))
    for u in range(n):
        if pair_to_result[u] == -1 and not dfs(neighbors, pair_to_result, result_to_pair, seen, u):
            return
    return pair_to_result

def get(a, b, r):
    return '-' if sub(a, b) == r else '+' if add(a, b) == r else '*'

def main():
    n = int(input())
    neighbors = list(list() for _ in range(n))
    pairs = list()
    record = dict()
    results = list()
    for i in range(n):
        a, b = map(int, input().split())
        pairs.append((a, b))
        for result in (op(a, b) for op in OPERATIONS):
            if result not in record:
                record[result] = len(record)
                results.append(result)
            neighbors[i].append(record[result])
    if graph := solve(n, len(record), neighbors):
        for u, v in enumerate(graph):
            print(f'{pairs[u][0]} {get(*pairs[u], results[v])} {pairs[u][1]} = {results[v]}')
    else:
        print('impossible')

if __name__ == '__main__':
    main()