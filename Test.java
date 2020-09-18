/*
To-do:
Native method 2
*/

import java.util.Scanner;

class Test {

   public native char[] alphabet(int size);
   public native char[] getNativeDua(int size);
   public native int[] getNativeTiga(char [] satu, char [] dua, int size);

   static {
        System.loadLibrary("CTest");
        System.loadLibrary("Cnativedua");
        System.loadLibrary("Cnativetiga");
    }
    public static void main(String[] args) {
        //array
        char [] nativesatu;
        char [] nativedua;
        int  [] nativetiga;
        Test t = new Test();
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int size = input.nextInt();

        //Get auto generated character
        nativesatu = t.alphabet(size);
        for(int i=0; i<size; i++){
          System.out.print(nativesatu[i]);
        }
        //native dua
        nativedua = t.getNativeDua(size);


        //native tiga
        nativetiga = t.getNativeTiga(nativesatu, nativedua, size);
        System.out.print("The Result:");
        for(int i=0; i<size; i++){
          System.out.print(nativetiga[i]);
        }

    }
}
