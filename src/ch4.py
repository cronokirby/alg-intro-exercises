# exercise 4.1-2
def slow_max_subarray(arr):
    lo, hi = 0, 0
    mx = None
    for i1 in range(len(arr)):
        for i2 in range(i1 + 1, len(arr) + 1):
            sm = sum(arr[i1:i2])
            if not mx or sm > mx:
                mx = sm
                lo, hi = i1, i2
    return mx, lo, hi


def _max_crossing_subarray(arr, low, mid, high):
    def find_sum(rng):
        sm = None
        total = 0
        mx = mid
        for i in rng:
            total += arr[i]
            if not sm or total > sm:
                sm = total
                mx = i
        return sm, mx
    left_sum, left_max = find_sum(range(mid, low - 1, -1))
    right_sum, right_max = find_sum(range(mid + 1, high))
    left_sum = left_sum if left_sum else 0
    right_sum = right_sum if right_sum else 0
    return (left_sum + right_sum, left_max, right_max + 1)


def _max_subarray(arr, low, high):
    if high - low == 1:
        return arr[0], low, high
    else:
        mid = (low + high) // 2
        left_sum, left_low, left_max = _max_subarray(arr, low, mid)
        right_sum, right_low, right_max = _max_subarray(arr, mid, high)
        cross_sum, cross_low, cross_max = _max_crossing_subarray(arr, low, mid, high)
        if left_sum >= right_sum and left_sum >= cross_sum:
            return left_sum, left_low, left_max
        elif right_sum >= left_sum and right_sum >= cross_sum:
            return right_sum, right_low, right_max
        else:
            return cross_sum, cross_low, cross_max


def max_subarray(arr):
    return _max_subarray(arr, 0, len(arr))


# Note: a slight modification of Kadane's algorithm
def linear_max_subarray(arr):
    max_here = max_so_far = arr[0]
    first_ind = 0
    last_ind = 0
    for i, x in enumerate(arr[1:]):
        added = max_here + x
        if x > added:
            max_here = x
            first_ind = i
        else:
            max_here = added
        if max_here > max_so_far:
            max_so_far = max_here
            last_ind = i
    # we add 1 to the both indices since we started iteration
    # at the second element. And an extra for the last_ind, since
    # arr[first_ind:last_ind] should be the max subarray.
    return max_so_far, first_ind + 1, last_ind + 2


## 4.2

def square_matrix_multiply(a, b):
    rows = len(a)
    c = [[0 for _ in range(rows)] for _ in range(rows)]
    for i in range(rows):
        for j in range(rows):
            for k in range(rows):
                c[i][j] += a[i][k] * b[k][j]
    return c
