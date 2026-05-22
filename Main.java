import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class Main{
    static int age;
    public static void main(String[] args) {
        int age = 27;
        age = 16;
        System.out.println("I am " + age + " years old.");
        double number1 = 5.8;
        int number2 = (int)number1;
        System.out.println(number2);

        int number3 = 12;
        System.out.println(number3 + number2);
        System.out.println(number3 - number2);
        System.out.println(number3 * number2);
        System.out.println(number3 / number2);
        System.out.println(number3 % number2);

        System.out.println(number3 == number2);
        System.out.println(number3 != number2);
        System.out.println(number3 > number2);
        System.out.println(number3 < number2);
        System.out.println(number3 >= number2);
        System.out.println(number3 <= number2);

        boolean b1 =false;
        boolean b2 =true;
        System.out.println(b1 || b2);
        System.out.println(b1 && b2);

        int number = 55;
        for (int i = 0; i < 10; i++) {
            number++;
            System.out.println(number);
        }
        for (int i = 0; i < 10; i++) {
            number--;
            System.out.println(number);
        }

        String basic = "Hello there";
        System.out.println(basic);
        String compareBasic = "Hello there";
        System.out.println(compareBasic.equals(basic));

        String Haku = "my name begins with 'H' ";
        int count = 23;
        System.out.println((String.format("%s, %s that sentence had %d chars", basic, Haku, count).toUpperCase()));
        System.out.println(String.format("%s, %s that sentence had %d chars", basic, Haku, count).toLowerCase());
        System.out.println(String.format("%s, %s that sentence had %d chars", basic, Haku, count).replace("H", "O"));

        Scanner sc = new Scanner(System.in);
        System.out.print("What is your name? ");
        String name = sc.nextLine().toLowerCase();

        System.out.println(String.format("%s?", name));

        System.out.print(String.format("%s, how old are you ", name));
        int age = sc.nextInt();
        System.out.println(String.format("%d? ",age));

        //clear input buffer
        sc.nextLine();

        System.out.println("What programming language do you use?");
        String language = sc.nextLine();

        System.out.println(String.format("%s? I like %s", language, language));


        System.out.println(String.format("%s, what is the first number?", input));
        int num1 = sc.nextInt();
        sc.nextLine();

        System.out.println(String.format(" what is the second number?", input));
        int num2 = sc.nextInt();
        sc.nextLine();

        System.out.println(String.format(" what operation? (+,-,*,/)", input));
        String operator = sc.nextLine();

        switch (operator) {
            case "+":
                System.out.println(num1 + num2);
                break;
            case "-":
                System.out.println(num1 - num2);
                break;
            case "*":
                System.out.println(num1 * num2);
                break;
            case "/":
                if(num2 != 0){
                    System.out.println(num1 / num2);
                }
                else{
                    System.out.println("cannot divide by 0");
                }
                break;
            default:
                System.out.println(String.format("%s is not valid", operator));
                break;

        }

        char[] vowels = {'a', 'e', 'o', 'u', 'i'};
        vowels[0] = 'x';
        System.out.println(Arrays.toString(vowels));
        System.out.println(vowels.length);
        Arrays.sort(vowels);
        System.out.println(vowels);

        int foundItemIndex = Arrays.binarySearch(vowels, 'x');
        System.out.println(foundItemIndex);

        Arrays.fill(vowels, 1, 3,'z');
        System.out.println(Arrays.toString(vowels));

        char copy[] = Arrays.copyOf(vowels, vowels.length);
        System.out.println(Arrays.toString(copy));
        for(int i = 1; i <= 10; i++) {
            System.out.println(num);
        }

        int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sum = 0;
        for(int i = 0; i < numbers.length; i++) {
            sum+=numbers[i];
        }
        System.out.println(sum);

        int numberFor = 5;
        for(int multiplier = 1; multiplier <= numberFor; multiplier++) {
            System.out.printf("%d X %d = %d\n", number, multiplier, number*multiplier);
        }
        for(int num = 1; num < 10; num++) {
            System.out.printf("%d times tables:", num);
            for(int multiplier = 1; multiplier < 10; multiplier++) {
                System.out.printf("%d X %d = %d\n", num, multiplier, num*multiplier);
            }
        }

        numberWhile = 5;
        int multiplier = 1;
        while(multiplier <= 10){
            System.out.printf("%d * %d = %d\n", numberWhile, multiplier, numberWhile*multiplier);
            multiplier++;
        }

        do{
            System.out.printf("%d * %d = %d", numberWhile, multiplier, numberWhile*multiplier);
            multiplier++;
        }while(multiplier <= 10);

        ArrayList<Integer> numberlist=new ArrayList<Integer>();
        numberlist.add(1);
        numberlist.add(2);
        numberlist.add(3);
        numberlist.add(4);
        numberlist.add(5);
        System.out.println(numberlist.toString());

        System.out.println(numberlist.get(3));

        numberlist.remove(Integer.valueOf(2));

        System.out.println(numberlist.toString());

        numberlist.set(2,30);
        System.out.println(numberlist.toString());

        System.out.println("Sorting");
        numberlist.sort(Comparator.naturalOrder());
        System.out.println(numberlist.toString());

        numberlist.sort(Comparator.reverseOrder());
        System.out.println(numberlist.toString());

        System.out.println(numberlist.contains(3));
        System.out.println("before:" + numberlist.toString());
        numberlist.forEach(value ->{
            numberlist.set(numberlist.indexOf(value), value*2);
        });
        System.out.println("after:" + numberlist.toString());
    }


