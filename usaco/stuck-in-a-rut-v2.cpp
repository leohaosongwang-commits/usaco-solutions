#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1e9 + 1;      // 表示"永不停止"
int N, x[50], y[50], stop_time[50];
char dir[50];                  // 'N' 向北, 'E' 向东

struct Event {
    int time_stopped;          // 被阻挡者何时停止
    int stopper;               // 阻挡者编号
    int stopped;               // 被阻挡者编号
    int stopper_time;          // 阻挡者到达交点所需的步数（用于判断阻挡者是否在半路被挡）
};
Event events[2500];            // 最多 N×N = 2500 个事件
int event_cnt;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> x[i] >> y[i];
        stop_time[i] = INF;    // 初始：所有牛都在移动
    }

    // 枚举 E 牛和 N 牛的所有配对，生成潜在阻挡事件
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dir[i] != 'E' || dir[j] != 'N') continue;

            // E(x[i],y[i]) 和 N(x[j],y[j]) 在 (x[j], y[i]) 相交的条件：
            // E 在 N 的西边，且 N 在 E 的南边
            if (x[i] >= x[j] || y[j] >= y[i]) continue;

            int t_e = x[j] - x[i];    // E 走到 x[j] 需要的步数
            int t_n = y[i] - y[j];    // N 走到 y[i] 需要的步数

            if (t_e < t_n)            // E 先到 → E 阻挡 N
                events[event_cnt++] = {t_n, i, j, t_e};
            else if (t_n < t_e)       // N 先到 → N 阻挡 E
                events[event_cnt++] = {t_e, j, i, t_n};
            // t_e == t_n：同时到，共享格子，互不阻挡
        }
    }

    // 按停止时刻升序排序（时间线）
    sort(events, events + event_cnt, [](const Event& a, const Event& b) {
        return a.time_stopped < b.time_stopped;
    });

    // 按时间线处理：每个事件必须满足两个条件才生效
    for (int k = 0; k < event_cnt; k++) {
        Event& e = events[k];

        // 条件1：阻挡者还没在半路被拦截（它必须在到达交点前还"活着"）
        if (stop_time[e.stopper] <= e.stopper_time) continue;

        // 条件2：被阻挡者还没被更早的事件阻挡
        if (stop_time[e.stopped] != INF) continue;

        stop_time[e.stopped] = e.time_stopped;   // 阻挡生效
    }

    for (int i = 0; i < N; i++) {
        if (stop_time[i] == INF) cout << "Infinity" << endl;
        else                     cout << stop_time[i] << endl;
    }
    return 0;
}
