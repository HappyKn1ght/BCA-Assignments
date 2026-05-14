public class ArrayIntro {
    public static void main(String[] args) {
        /*
        // declaration + memory allocation + initialization
          int marks[] = { 45, 55, 65, 75, 85 };
        //int [] marks = { 45, 55, 65, 75, 85 };
          System.out.println(marks[4]);
        */

        int marks[] = new int[5]; // declaration + memory allocation
        //initialization
        marks[0] = 45;
        marks[1] = 55;
        marks[2] = 65;
        marks[3] = 75;
        marks[4] = 85;

        //for(int i = 0; i<5; i++){
        for(int i = 0; i<marks.length; i++){
            System.out.println("marks["+i+"] = " + marks[i]);
        }
        System.out.println("Length: " + marks.length);
        //System.out.println(marks[4]);

        System.out.println("\nReverse Order:- ");
        //for(int i = 4 ; i>=0; i--){
        for(int i = marks.length - 1 ; i>=0; i--){
            System.out.println("marks["+i+"] = " + marks[i]);
        }
        System.out.println("Length: " + marks.length);

        //for-each loop
        System.out.println("\nPrinting using for-each loop: ");
        for(int element: marks){
            System.out.println(element);
        }
    }
}
  