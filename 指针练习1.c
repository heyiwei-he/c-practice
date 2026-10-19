/* 练习文件：想练什么就写在这里。

   规矩：一个工程只能有一个 main()。
   - 现在能跑的是「指针验证.c」，所以这个文件里还没有 main
   - 你在这里写下 main() 之后，按 Ctrl+F5 会报 LNK2005 / LNK1168（两个 main 冲突），
     这不是代码写错了。把「指针验证.c」右键 → 属性 → 配置属性 → 常规
     → 「从生成中排除」→ 选「是」，再 Ctrl+F5 就能跑这个文件了
   - 想换回来：把这个文件排除掉、把那个文件的排除取消

   这一天写的代码，收工前别忘了提交：
     git add .
     git commit -m "今天学了什么"
*/

//#include <stdio.h>  
//void skill()
//{
//    printf("liubi");
//}
//int main()
//{
//    void (*p)() = skill;
//    p();
//
//    return 0;
//}

//#include<stdio.h>
//int plus(int num1, int num2)
//{
//    int result = num1 + num2;
//    return result;
//}
//int minus(int num1, int num2)
//{
//    int result = num1 - num2;
//    return result;
//}
//int multiply(int num1, int num2)
//{
//    int result = num1 / num2;
//    return result;
//}
//int divide(int num1, int num2)
//{
//    int result = num1 * num2;
//    return result;
//}
//int main()
//{
//    int num1, num2;
//    int (*arr[4])(int, int) = { plus,minus,multiply,divide };
//    printf("请输入要计算的两个数:\n");
//    scanf("%d %d", &num1, &num2);
//    int choose;
//    printf("请输入您所要进行的计算(加法：1 减法：2 乘法：3 除法：4)\n");
//    scanf("%d", &choose);
//    int result = (arr[choose - 1])(num1,num2);
//    printf("计算的结果是：%d", result);
//}
