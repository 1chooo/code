/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a003
 * Status: AC
 */

import java.util.Scanner;

public class solution {
    public static int decideFortune(int month, int day) {
        int s = (month * 2 + day) % 3;

        if (s == 0) {
            System.out.println("普通");
        } else if (s == 1) {
            System.out.println("吉");
        } else {
            System.out.println("大吉");
        }

        return 0;
    }
    public static void main(String[] Args) {
        Scanner myObj = new Scanner(System.in);
        int month = 0, day = 0;

        month = myObj.nextInt();
        day = myObj.nextInt();

        solution.decideFortune(month, day);        

        myObj.close();
    }
}