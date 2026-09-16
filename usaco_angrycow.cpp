#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cow[1001];
    int arr[1001] = {};      // 复用:标记该干草堆是否已炸过
    int radius[1001] = {};   // 复用:被炸干草堆当前的爆炸半径

    for (int i = 0; i < n; i++) {
        cin >> cow[i];
    }
    sort(cow, cow + n);

    int ans = 0;

    // 候选引爆点:每个干草堆的 x-1 / x / x+1 (最优解一定落在这些临界点之一)
    for (int i = 0; i < n; i++) {
        for (int off = -1; off <= 1; off++) {
            int c = cow[i] + off;   // c = 引爆点(复用你定义的 c)

            // 每次尝试前重置
            for (int k = 0; k < n; k++) {
                arr[cow[k]] = 0;
                radius[cow[k]] = 0;
            }

            int count = 0;

            // 第 0 波:引爆点 c 以半径 1 炸,炸到距离 <= 1 的干草堆
            for (int k = 0; k < n; k++) {
                int d = cow[k] - c;
                if (d < 0) d = -d;
                if (d <= 1) {
                    arr[cow[k]] = 1;
                    radius[cow[k]] = 1;
                    count++;
                }
            }

            // 链式反应:left / right 当作遍历干草堆的两个下标
            int changed = 1;
            while (changed == 1) {
                changed = 0;
                for (int left = 0; left < n; left++) {
                    
                    if (arr[cow[left]] == 0) {
                        continue;
                    }

                    for (int right = 0; right < n; right++) {

                        if (arr[cow[right]] == 1) {
                            continue;
                        }

                        int dist = cow[right] - cow[left];

                        if (dist < 0) {
                            dist = -dist;
                        }

                        if (dist <= radius[cow[left]]) {
                            arr[cow[right]] = 1;
                            radius[cow[right]] = radius[cow[left]] + 1;
                            count++;
                            changed = 1;
                        }
                    }
                }
            }

            ans = max(ans, count);
        }
    }

    cout << ans << endl;
    return 0;
}
