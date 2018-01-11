#include<stdio.h>
#include<stdlib.h>
int MyAtoi(char *);
int main()
{
        char **player;
        int i = 0, j = 0, r = 0, score = 0;

        player = (char **)calloc(11, sizeof(char *));
        *(player + 10) = (char *)calloc(30, sizeof(char));

        printf("점수를 입력하세요\n");
        scanf("%s", *(player+10));

        while (i<9) {
                if (*(*(player + 10) + r + 1) == '/') {
                        *(player + i) = (char *)calloc(2, sizeof(char));
                        *(*(player + i)) = *(*(player + 10) + r);
                        *(*(player + i) + 1) = *(*(player + 10) + r + 1);
                        score += 10;
                        score += MyAtoi(*(player + 10) + r + 2);
                        r += 2;
                        i++;
                }
                else if (*(*(player + 10) + r) == 'X') {
                        *(player + i) = (char *)calloc(1, sizeof(char));
                        *(*(player + i)) = *(*(player + 10) + r);
                        score += 10;
                        score += MyAtoi(*(player + 10) + r + 1);
                        score += MyAtoi(*(player + 10) + r + 2);
                        r++;
                        i++;
                }
                else {
                        *(player + i) = (char*)calloc(2, sizeof(char));
                        *(*(player + i)) = *(*(player + 10) + r);
                        *(*(player + i) + 1) = *(*(player + 10) + r + 1);
                        score += MyAtoi(*(player + 10) + r);
                        score += MyAtoi(*(player + 10) + r + 1);
                        i++;
                        r += 2;
                }

        }

        if (*(*(player + 10) + r + 1) == '/') {
                *(player + i) = (char*)calloc(3, sizeof(char));
                *(*(player + i)) = *(*(player + 10) + r);
                *(*(player + i) + 1) = *(*(player + 10) + r + 1);
                *(*(player + i) + 2) = *(*(player + 10) + r + 2);
                score += MyAtoi(*(player + 10) + r + 2);
                score += 10;
        }

        else if (*(*(player + 10) + r) == 'X') {
                *(player + i) = (char*)calloc(3, sizeof(char));
                *(*(player + i)) = *(*(player + 10) + r);
                *(*(player + i) + 1) = *(*(player + 10) + r + 1);
                *(*(player + i) + 2) = *(*(player + 10) + r + 2);
                score += MyAtoi(*(player + 10) + r + 1);
                score += MyAtoi(*(player + 10) + r + 2);
                score += 10;
        }
        else {
                *(player + i) = (char*)calloc(2, sizeof(char));
                *(*(player + i)) = *(*(player + 10) + r);
                *(*(player + i) + 1) = *(*(player + 10) + r + 1);
                score += MyAtoi(*(player + 10) + r);
                score += MyAtoi(*(player + 10) + r + 1);
        }


        printf("Total : %d점", score);

        for (i = 0;i < 11;i++) {
                free(*(player + i));
        }
        free(player);

        return 0;

}
int MyAtoi(char *str) {
        if (*str == 'X')
                return 10;
        else if (*str == '/') {
                return 10 - (*(str - 1) - 48);
        }
        else
                return *str - 48;
}

