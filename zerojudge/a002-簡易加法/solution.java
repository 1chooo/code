/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a002
 * Status: AC
 */

import java.util.Scanner;

public class solution {
    public static void main(String[] Args) {
        Scanner myObj = new Scanner(System.in);
        int first = 0, second = 0;

        first = myObj.nextInt();
        second = myObj.nextInt();

        System.out.println(first + second);

        myObj.close();
    }
}