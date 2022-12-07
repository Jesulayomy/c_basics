#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int checkAns(int m, char *usrAns, char *ans)
{
    if (usrAns[0] == ans[m])
    {
        printf("Correct!\n\n");
        return (1);
    }
    else
        printf("Incorrect!\n\n");

        return (0);
}

int main(void)
{
    int m, n, score = 0;
    char questions[][100] = {"1. What is your name?",
                                    "2. What did you do last night?",
                                    "3. How many fingers does an octopus have",
                                    "4. How many days are in the 6th month?"
                                };

    char options[][20] = {"A. Rick", "B. Tony", "C. John", "D. Florence",
                                    "A. That task", "B. Ship to volcano", "C. Your Mom", "D. Homework",
                                    "A. Two", "B. One", "C. Eight", "D. None",
                                    "A. 6", "B. 31", "C. 28", "D. 30"
                                };
    char ans[] = {'B', 'C', 'D', 'D'};
    char usrAns[2];

    for (m = 0; m < sizeof(questions) / sizeof(questions[0]); m++)
    {
        printf("%s\n", questions[m]);
        for (n = m * 4; n < (m + 1) * 4; n ++)
        {
            printf("%s\t", options[n]);
        }
        printf("\nAns: ");
        scanf("%s", &usrAns);
        /* You can use scanf("%c", &c) and another scanf("%c")
        to remove the newline stored in the buffer.
        This newline causes the program to skip the next question when using %c */
        score += checkAns(m, usrAns, ans);
    }

    score *= 100 / (sizeof(ans) / sizeof(ans[0]));
    printf("You scored %d%%", score);
    return (0);
}
