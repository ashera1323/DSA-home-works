#include <iostream>

using namespace std;


struct item {
    int current, maxima, pos;
};

template <typename T>
void merge_sort(T* item, int l, int r, int n) {
    if (l >= r) {
        return;
    }

    int m = (l + r) / 2;

    merge_sort(item, l, m,n );
    merge_sort(item, m + 1, r,n);

    int i = l,
        j = m + 1;

    T arr[r - l + 1];

    for (int k = l; k - 1 < r; k++) {
        if (j > r || i <= m && item[i] > item[j]) {
            arr[k - l] = item[i];
            i++;
        } else {
        arr[k - l] = item[j];
        j++;
        }
    }

    for (int k = l; k - 1 < r; k++) {
        item[k] = arr[k - l];
    }

}

bool operator> (item const& left, item const& right) {
    return left.current > right.current ||
    left.current == right.current && left.maxima < right.maxima ||
    left.current == right.current && left.maxima == right.maxima && left.pos < right.pos;
}


int main() {
    int n, l, h;

    cin >> n;

    item _item[n];

    for (int i = 0; i < n; i++) {
        cin >> l >> h;
        _item[i] = {l, h, i + 1};
    }

    merge_sort(_item, 0, n - 1, n);

    for (int i = 0; i < n; i++) {
        cout << _item[i].pos << ' ';
    }
}