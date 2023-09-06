#include "main.h"
int wordnofn (char *str, int **wordslen)
{
        int i = 0, wordno = 0, flag = 0;
        while (str[i])
        {
                if (str[i] == ' ')
                        flag = 0;
                else if (flag == 0)
                {
                        flag = 1;
                        wordno++;
                }
                i++;
        }
        
        *wordslen = (int *)malloc(sizeof(int) * wordno);
        return (wordno);
}
void setwordslen(char **strtrgt, char *str, int *wordslen)
{
        int i = 0, flag = 0, tmp = 0, crnt = 0;
        while (str[i])
        {
                if (str[i] == ' ')
                {
                        if (str[i + 1] != ' ' && str[i + 1] != '\0')
                        {
                                flag = 1;
                        }
                }
                
                else if (flag)
                {
                        tmp++;
                        if (str[i + 1] == ' ')
                        {
                            wordslen[crnt] = tmp;
                            strtrgt[crnt] = malloc(sizeof(char) * tmp + 1);
                                flag = 0;
                                tmp = 0;
                                crnt++;
                        }
                }
                i++;
        }
}
char **strtow(char *str)
{
        int i = 0, wordno = 0, *wordslen, flag = 0, k = 0, crnt = 0;
        char **arrstr;
        
        if (str == NULL)
                return (NULL);
        wordno = wordnofn(str, &wordslen);
        
        if (!wordno)
                return (NULL);
        arrstr = malloc(sizeof(char *) * wordno + 1);
        setwordslen(arrstr , str, wordslen);
        for (i = 0; i < wordno; i++)
        {
            arrstr[i] = malloc(sizeof(char) * wordslen[i] + 1);
        }
        while (str[i])
        {
                if (str[i] == ' ')
                {
                        if (str[i + 1] != ' ' && str[i + 1] != '\0')
                        {
                                flag = 1;
                        }
                }
                else if (flag)
                {
                    arrstr[crnt][k] = str[i];
                    k++;
                    if (str[i + 1] == ' ')
                        {
                                arrstr[crnt][k] = '\0';
                                crnt++;
                                k = 0;
                        }
                }
                i++;
        }
        free(wordslen);
        arrstr[crnt] = NULL;    
    return (arrstr);
}
