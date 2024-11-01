/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=e624
 Status: AC
*/

package e;

import java.util.ArrayList;
import java.util.Scanner;

public class e624 {
    public static void main(String[] Args) {
        Scanner myObj = new Scanner(System.in);

        while(myObj.hasNextLine()) {
            ArrayList<Integer> myArray = new ArrayList<>();
            String inStr1 = myObj.next();
            String inStr2 = myObj.nextLine();
            inStr2 = inStr2.substring(1, inStr2.length());

            AllInAll allInAll = new AllInAll(inStr1, inStr2, myArray);
            allInAll.showAns();
        }

        myObj.close();
    }
}


class AllInAll {
    private String inStr1;
    private String inStr2;
    private ArrayList<Integer> myArray;

    public AllInAll(String inStr1, String inStr2, ArrayList<Integer> myArray) {
        this.inStr1 = inStr1;
        this.inStr2 = inStr2;
        this.myArray = myArray;
    }

    public void judge() {
        int len1 = inStr1.length();
        int len2 = inStr2.length();

        for (int j = (len1-1); j >= 0; j--) {
            for (int k = (len2-1); k >= 0; k--) {
                if (inStr1.charAt(j) == inStr2.charAt(k)) {
                    myArray.add(k);
                    len2--;     // this will prevent from counting repeatly.
                    break;
                }
            }
        }
    }

    public void showAns() {
        judge();
        
        int swapTimes = 0;

        // If the the order of the array isn't descending,
        // it represent that "inStr1" not in "inStr2".
        // Through the concept of the "Bubble Sort".

        for (int i = 0; i < myArray.size() - 1; i++) {
            int first = myArray.get(i);
            int last = myArray.get(i + 1);
            if (first < last) {
                swapTimes++;
            }
        }

        if (myArray.size() == inStr1.length() && swapTimes == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}