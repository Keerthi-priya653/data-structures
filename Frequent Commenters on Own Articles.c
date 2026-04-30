#include <stdio.h>

#define MAX 1000

int main() {
    int n;
    scanf("%d", &n);

    int article_id[MAX], author_id[MAX], viewer_id[MAX];
    int freq[MAX] = {0};
    int used[MAX] = {0};

    // Input data
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &article_id[i], &author_id[i], &viewer_id[i]);
    }

    // Count self-comments
    for(int i = 0; i < n; i++) {
        if(author_id[i] == viewer_id[i]) {
            freq[author_id[i]]++;
        }
    }

    // Print authors with more than 1 self-comment
    for(int i = 0; i < n; i++) {
        int id = author_id[i];
        if(freq[id] > 1 && used[id] == 0) {
            printf("%d\n", id);
            used[id] = 1;
        }
    }

    return 0;
}
