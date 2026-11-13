class Solution {
public:
    bool canAssign(int k, vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        deque<int> taskDeque;
        for (int i = 0; i < k; ++i) {
            taskDeque.push_back(tasks[i]);
        }

        multiset<int> workerSet;
        for (int i = workers.size() - k; i < workers.size(); ++i) {
            workerSet.insert(workers[i]);
        }

        int pillsLeft = pills;

        while (!taskDeque.empty()) {
            int currentTask = taskDeque.back();
            taskDeque.pop_back();

            multiset<int>::iterator it1 = workerSet.lower_bound(currentTask);
            if (it1 != workerSet.end()) {
                workerSet.erase(it1);
            }
            else {
                if (pillsLeft == 0) return false;

                multiset<int>::iterator it2 = workerSet.lower_bound(currentTask - strength);
                if (it2 == workerSet.end()) return false;

                workerSet.erase(it2);
                pillsLeft--;
            }
        }

        return true;
    }

    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());

        int low = 0;
        int high = min((int)tasks.size(), (int)workers.size());
        int answer = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (canAssign(mid, tasks, workers, pills, strength)) {
                answer = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return answer;
    }
};
