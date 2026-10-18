/* 数组指针验证程序：2026-10-16 那两段代码 + 几个能亲眼看到的实验
   编译运行：双击「编译并运行.cmd」，或在 VS Code 里按 Ctrl+Shift+B */
//#include <stdio.h>
////
//int main(void)
//{
//    int arr[3][5] = {
//        {1, 2, 3, 4, 5},
//        {6, 7, 8, 9, 10},
//        {11, 12, 13, 14, 15}
//    };

    /* 这是第一种写法 */
    /*int (*p)[5] = arr;
    printf("--- 第一种写法：*(*p + j) ---\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *(*p + j));
        }
        printf("\n");
        p++;
    }*/
//
//    /* 这是第二种写法 */
   /* int (*p1)[5] = arr;
    printf("--- 第二种写法：(*p1)[n] ---\n");
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 5; n++)
        {
            printf("%d ", (*p1)[n]);
        }
        printf("\n");
        p1++;
    }*/
//
//    /* 它俩是不是同一个表达式？ */
//    int (*pa)[5] = arr;
//    int (*pb)[5] = arr;
//    printf("--- 等价性检查 ---\n");
//    printf("(*pa)[4]   = %d\n", (*pa)[4]);
//    printf("*(*pb + 4) = %d\n", *(*pb + 4));
//
//    /* p++ 一次跳多少字节 */
//    int (*q)[5] = arr;
//    printf("--- p++ 到底跳多少 ---\n");
//    printf("sizeof(*q) = %zu 字节（一整行）\n", sizeof(*q));
//    printf("q   的地址 = %p\n", (void *)q);
//    printf("q+1 的地址 = %p\n", (void *)(q + 1));
//    printf("相差       = %lld 字节\n", (long long)((char *)(q + 1) - (char *)q));
//    int *r = arr[0];
//    printf("普通 int* 的 r+1 - r = %lld 字节\n", (long long)((char *)(r + 1) - (char *)r));
//
//    /* 三种等价写法取同一个元素 */
//    int i2 = 2, j2 = 3;
//    printf("--- 取 arr[2][3] 的三种写法 ---\n");
//    printf("arr[i2][j2]     = %d\n", arr[i2][j2]);
//    printf("*(*(arr+i2)+j2) = %d\n", *(*(arr + i2) + j2));
//    printf("(*(arr+i2))[j2] = %d\n", (*(arr + i2))[j2]);
//
//    /* 数组名不退化的两个地方 */
//    printf("--- 数组名不退化的两个地方 ---\n");
//    printf("sizeof(arr)  = %zu 字节（整个二维数组）\n", sizeof(arr));
//    printf("sizeof(&arr) = %zu 字节（指针本身）\n", sizeof(&arr));
    /*return 0;
}*/
