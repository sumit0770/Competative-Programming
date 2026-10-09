#include <iostream>
#include <queue>
#include <unordered_set>
#include <list>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;


void fifoPageReplacement(int pages[], int n, int frames) {
    unordered_set<int> s;
    queue<int> q;
    int pageFaults = 0;

    for (int i = 0; i < n; i++) {
        if (s.find(pages[i]) == s.end()) {
            if (s.size() == frames) {
                int val = q.front();
                q.pop();
                s.erase(val);
            }
            s.insert(pages[i]);
            q.push(pages[i]);
            pageFaults++;
        }
    }

    cout << "FIFO Page Faults: " << pageFaults << endl;
}


void lruPageReplacement(int pages[], int n, int frames) {
    list<int> lruList;
    unordered_map<int, list<int>::iterator> pageMap;
    int pageFaults = 0;

    for (int i = 0; i < n; i++) {
        int page = pages[i];

        if (pageMap.find(page) == pageMap.end()) {
            if (lruList.size() == frames) {
                int last = lruList.back();
                lruList.pop_back();
                pageMap.erase(last);
            }
            pageFaults++;
        } else {
            lruList.erase(pageMap[page]);
        }

        lruList.push_front(page);
        pageMap[page] = lruList.begin();
    }

    cout << "LRU Page Faults: " << pageFaults << endl;
}


void optimalPageReplacement(int pages[], int n, int frames) {
    vector<int> memory;
    int pageFaults = 0;

    for (int i = 0; i < n; i++) {
        int page = pages[i];
        auto it = find(memory.begin(), memory.end(), page);

        if (it == memory.end()) {
            if (memory.size() < frames) {
                memory.push_back(page);
            } else {
                int farthest = i + 1, idx = -1;
                for (int j = 0; j < memory.size(); j++) {
                    int k;
                    for (k = i + 1; k < n; k++) {
                        if (pages[k] == memory[j])
                            break;
                    }
                    if (k > farthest) {
                        farthest = k;
                        idx = j;
                    }
                }
                if (idx == -1) idx = 0;
                memory[idx] = page;
            }
            pageFaults++;
        }
    }

    cout << "Optimal Page Faults: " << pageFaults << endl;
}


int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frames = 4;

    cout << "Page Reference String: ";
    for (int i = 0; i < n; i++) cout << pages[i] << " ";
    cout << "\nNumber of Frames: " << frames << endl << endl;

    fifoPageReplacement(pages, n, frames);
    lruPageReplacement(pages, n, frames);
    optimalPageReplacement(pages, n, frames);

    return 0;
}
