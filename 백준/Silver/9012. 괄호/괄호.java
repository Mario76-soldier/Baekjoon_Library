import java.util.Stack;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String s;
        Stack<Character> stack=new Stack<>();
        for(int i=0; i<n; i++){
            s=sc.next();
            Boolean check=true;
            for(int j=0; j<s.length(); j++){
                if(s.charAt(j)=='('){
                    stack.push('(');
                }
                else if(s.charAt(j)==')'){
                    if(stack.isEmpty()){
                        check=false;
                        break;
                    }
                    else{
                        stack.pop();
                    }
                }
            }
            if (stack.isEmpty()&&check==true){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
            stack.clear();
        }

    }
}
