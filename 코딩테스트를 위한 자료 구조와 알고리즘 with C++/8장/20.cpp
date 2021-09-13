//
// Created by 박정현 on 2021/09/13.
//

#include "string"
#include "algorithm"
#include "iostream"

using namespace std;

int solution (string s1, string s2) {

    int dp[s1.size()][s2.size()];

    for (int i = 0; i < s1.size(); i ++) {
        for (int j = 0; j < s2.size(); j ++) {
            if (s1[i] == s2[j]) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
            } else {
                if (i == 0) {
                    dp[i][j] = dp[i][j-1];
                } else {
                    dp[i][j] = (j != 0 ? max(dp[i-1][j], dp[i][j-1]) : dp[i-1][j]);
                }
            }
        }
    }

    return dp[s1.size()-1][s2.size()-1];

}

void test(string s1, string s2, int expected) {
    int answer = solution(s1, s2);
    cout << "Compare " << s1 << " and " << s2 << endl;
    cout << "Expected " << expected << endl;
    cout << "Actual " << answer << endl;
    cout << (answer == expected ? "Correct!" : "Wrong!") << endl;
}

int main() {
    test("A1B2C3D4E", "ABCDE", 5);
    test("ABZCYDABAZADAEA", "YABAZADBBEAAECYACAZ", 10);
}