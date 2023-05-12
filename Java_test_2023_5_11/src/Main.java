/**
 * Created with IntelliJ IDEA.
 * Description:
 * User: 86183
 * Date: 2023-05-11
 * Time: 14:37
 */
public class Main {
    /**
     * ”public class“是一个类，需要先写类，再写方法。
     * ”Main“是类名，一般采用的是大驼峰，就是一个单词，就第一个字母大写，两个单词就两个单词的首字母都大写。
     * 如果是public class，类名一定要和文件名一样。不一样就出错。
     * 在一个文件中只能有一个public类。
     */
    public static void main(String[] args) {
        /**
         *     “public”表内示程序的访问权限，表示的是任何的场合可以被引用。
         *     “static”表示方法是静态的，不依赖类的对象的。
         *     “void"是函数的返回值
         *     “main"是函数名。
         *     ”String[] args“类似C语言中的形式参数，Java当中数组的定义方式。
         *     "args"是形参变量，叫什么无所谓，叫jilinpengyuyan(吉林彭于晏)没问题。
         */
        System.out.println("Hello world!");
        //System.out.println();类似C语言中的printf。
        System.out.println("hello");
        System.out.println(10);//10.sout
        System.out.println(10);
        for (int i = 0; i < 10; i++) {
            ;
        }
    }
}