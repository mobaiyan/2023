    // for(i = 0;i < col; i++)//把每列分开
    // {   
    //     count = 0;
    //     int j = 0;
    //     for(j = 0;j < row; j++)//找到每行第一个元素
    //     {
    //         //i列的第j行元素
    //         if(board[j][i] == '*')
    //         {
    //             count++;
    //         }
    //     }
    //     if(count >= NUM)//一列中 有大于条件的元素 但不确定是否连续
    //     //接下来判断是否连续
    //     {
    //         int n = 1;
    //         for(n = 1;n < row; n++)//列出这列的每个元素
    //         {
    //             if(board[n -1][i]==board[n][i])//上一行的i列元素与下一列相等
    //             {
    //                 count_f++;
    //                 if(count_f == NUM)
    //                 {
    //                     goto flag;
    //                 }
    //             }
    //             else
    //             {
    //                 count_f = 1;
    //             }
                
    //         } 
    //     }
    //     if(count_f == NUM)
    //     {
    //         flag:
    //             return '*';//如果满足条件
    //     }      
    // }