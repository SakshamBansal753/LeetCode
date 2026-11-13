class Solution {
public:
    string pushDominoes(string dominoes) {
           int n = dominoes.size();
    vector<int> left(n, 0), right(n, 0);
    int time = 0;

    // Left to Right pass to handle 'R'
    time = 0;
    for (int i = 0; i < n; ++i) {
        if (dominoes[i] == 'R') {
            time = 1;
            right[i] = time;
        } else if (dominoes[i] == '.' && time > 0) {
            time++;
            right[i] = time;
        } else {
            time = 0;
        }
    }

    // Right to Left pass to handle 'L'
    time = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (dominoes[i] == 'L') {
            time = 1;
            left[i] = time;
        } else if (dominoes[i] == '.' && time > 0) {
            time++;
            left[i] = time;
        } else {
            time = 0;
        }
    }

    // Build the final result
    string result = "";
    for (int i = 0; i < n; ++i) {
        if (left[i] == 0 && right[i] == 0) {
            result += dominoes[i];
        } else if (left[i] == 0 || (right[i] != 0 && right[i] < left[i])) {
            result += 'R';
        } else if (right[i] == 0 || (left[i] != 0 && left[i] < right[i])) {
            result += 'L';
        } else {
            result += '.'; // Both forces equal
        }
    }

    return result;

    }
};