/*
 * Author: @1chooo
 * Title: 10009 - All Roads Lead Where?
 * Required: frequency limit: 3.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=961
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

class Segment {
  public:
    int left, right;

    Segment(int l, int r) : left(l), right(r) {}

    bool operator<(const Segment &s) const {
        return left < s.left;
    }
};

int coverIt(int m, vector<Segment> &seg, vector<Segment> &res) {
    Segment cover(0, m);
    sort(seg.begin(), seg.end()); // Sort by left edge.

    for (int i = 0; i < seg.size(); i) {
        if (seg[i].left <= cover.left)
            ;
        else
            return 0;
        Segment *max = &seg[i];
        for (i++; i < seg.size(); i++) {
            if (seg[i].left <= cover.left)
                ;
            else
                break;
            if (seg[i].right > max->right) max = &seg[i];
        }
        res.push_back(*max);
        cover.left = max->right;
        if (cover.left >= cover.right) return res.size();
    }
    return 0;
}

int main(void) {
    int n;

    scanf("%d", &n);
    while (n--) {
        int m;
        int l, r;

        scanf("%d", &m);
        vector<Segment> seg;
        while (scanf("%d%d", &l, &r) != EOF) {
            if (l == 0 && r == 0)
                break;
            seg.push_back(Segment(l, r));
        }

        vector<Segment> res;
        if (coverIt(m, seg, res) > 0) {
            printf("%d\n", res.size());
            for (int i = 0; i < res.size(); i++) {
                printf("%d %d\n", res[i].left, res[i].right);
            }
        } else {
            printf("0\n");
        }

        if (n > 0)
            printf("\n");
    }

    return 0;
}
