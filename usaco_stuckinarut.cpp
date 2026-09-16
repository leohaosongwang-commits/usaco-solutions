#include <iostream>
#include <set>
using namespace std;

struct Cow {
    char dir;        // 'E' 或 'N'
    int x, y;        // 当前位置
    bool stopped;    // 是否已停止
    int eaten;       // 已经吃了多少格
};

int main() {
    int N;
    cin >> N;
    Cow cow[50];
    set<pair<int,int>> grass;  // 已被吃过的格子（之前轮次的）

    int max_coord = 0;
    for (int i = 0; i < N; i++) {
        cin >> cow[i].dir >> cow[i].x >> cow[i].y;
        cow[i].stopped = false;
        cow[i].eaten = 0;
        max_coord = max(max_coord, max(cow[i].x, cow[i].y));
    }

    // 逐小时模拟：每轮所有牛同时行动
    // 步数上限：坐标范围足够大即可（小坐标数据不会超时）
    int step_limit = max_coord + 10;
    for (int step = 0; step < step_limit; step++) {
        bool any_moving = false;
        set<pair<int,int>> new_grass;  // 本轮新吃的格子（同时到达的牛共享）

        for (int i = 0; i < N; i++) {
            if (cow[i].stopped) continue;
            any_moving = true;

            // 检查当前格是否已被其他牛在之前轮次吃过
            if (grass.count({cow[i].x, cow[i].y})) {
                cow[i].stopped = true;  // 踩到 rut → 停止
            } else {
                new_grass.insert({cow[i].x, cow[i].y});  // 标记为已吃
                cow[i].eaten++;                          // 计数
                // 向前移动一格
                if (cow[i].dir == 'E') cow[i].x++;
                else                   cow[i].y++;
            }
        }

        if (!any_moving) break;  // 所有牛都停了

        grass.insert(new_grass.begin(), new_grass.end());  // 本轮结束后统一提交
    }

    for (int i = 0; i < N; i++) {
        if (cow[i].stopped) cout << cow[i].eaten << endl;
        else                cout << "Infinity" << endl;
    }
    return 0;
}
