///week03-4.cpp
///M90H044 瘋狂程設不能打中文，會變亂碼
///程式貼到 CodeBlocks 再寫註解
#include <stdio.h>
int main()
{
    int ans = 0;///答案加到這裡面
    ///迴圈前面 ans 是0
    int N;///有一整數是 N
    scanf("%d", &N);
    for(int i = 1;i<=N; i++)///讀入 N
    ///人類的迴圈從1開始
    {
        ans+=i;///迴圈中間 修改ans
    }
    printf("%d", ans);
    ///迴圈後面印出ans

}
