import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main n = new Main();
        n.doStuff();
    }
    private ArrayList<Student> myClass = new ArrayList<>();
    private int getInteger(String prompt){
        int ret;
        Scanner inp=new Scanner(System.in);
        System.out.println(prompt);
        ret=inp.nextInt();
        return ret;
    }
    private String getString(String prompt){
        String ret;
        Scanner inp=new Scanner(System.in);
        System.out.println(prompt);
        ret=inp.nextLine();
        return ret;
    }
    private void enterClassDetails(){
        String end,firstName,LastName;
        int dayOfBirth,monthOfBirth,yearOfBirth,score;
        do{
            firstName=getString("Student firstname: ");
            LastName=getString("Student lastname: ");
            dayOfBirth=getInteger("day of birth (day)");
            monthOfBirth=getInteger("month of birth (numeric)");
            yearOfBirth=getInteger("year of birth (yyyy)");
            //Create new student + add to ArrayList
            Student s = new Student(firstName,LastName,dayOfBirth,monthOfBirth,yearOfBirth);
            score = getInteger("Student score: ");
            s.setScore(score);

            myClass.add(s);
            end = getString("Add another student [y/n]? ");
        }while(!end.toLowerCase().contains("n"));
    }
    private void doStuff(){
        enterClassDetails();
        Student maxScorer=findMax();
        System.out.println("The max score was "+maxScorer.getScore()+" by "+maxScorer.getGivenName()+" "+maxScorer.getFamilyName());
    }
    public Student findMax(){
        int maxScore=-1;
        int counter=0;
        Student max=null;
        //Looks at students 1 by 1 to find max
        for(counter=0;counter<myClass.size();counter++){
            Student s = myClass.get(counter);
            if(s.getScore()>maxScore){
                max=s;
                maxScore=s.getScore();
            }
        }
        return max;
    }
    public Student findMin(){
        int minScore=999;
        int counter=0;
        Student min=null;
        for(counter=0;counter<myClass.size();counter++){
            Student s = myClass.get(counter);
            if(s.getScore()<minScore){
                min=s;
                minScore=s.getScore();
            }
        }
        return min;
    }
}

