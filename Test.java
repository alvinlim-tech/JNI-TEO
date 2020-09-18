import java.util.Scanner;

class Test {
   public native char[] alphabet(int size);


  // public void display (int[] array){
 //       System.out.print("The complete array is ");
//	for (int element: array)
 //                System.out.print(element + "  ");
 //  }
   static {
        System.loadLibrary("CTest");
    }
    public static void main(String[] args) {
        //array
        char [] test;
        Test t = new Test();
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int size = input.nextInt();

        //Get auto generated character
        test = t.alphabet(size);
        for(int i=0; i<size; i++){
          System.out.print(test[i]);
        }

    }
}
