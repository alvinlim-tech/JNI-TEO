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
        try{
          System.out.print("Enter the size of array: ");
          int size = input.nextInt();

          //Get auto generated character
          nativesatu = t.alphabet(size);
          System.out.print("Random-Generated Character:");
          for(int i=0; i<size; i++){
            System.out.print(nativesatu[i]);
          }
          //native dua Get user input for character
          nativedua = t.getNativeDua(size);
          System.out.print("\nYour-Generated Character:");
          for(int i=0; i<size; i++){
            System.out.print(nativedua[i]);
          }
          /*Use this if you want get user input for size again
            System.out.print("Enter the size of array2: ");
            int size2 = input.nextInt();
            nativedua = t.getNativeDua(size);
            System.out.print("\nYour-Generated Character:");
            for(int i=0; i<size; i++){
              System.out.print(nativedua[i]);
            }
          */

          //native tiga
          nativetiga = t.getNativeTiga(nativesatu, nativedua, size);
          System.out.print("\nThe Result:");
          for(int i=0; i<size; i++){
            System.out.print(nativetiga[i]);
          }
        }
        catch(Exception e){
          System.out.print("Please Re-Run Program and Enter Valid Size");
        }




    }
}
