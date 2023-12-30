
import java.util.Queue;
import java.util.LinkedList;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();//카드 개수를 입력받는다.
        Queue<Integer> queue=new LinkedList<>();
        for(int i=1; i<=n; i++){//1번부터 n번까지의 카드를 큐에 넣는다.
            queue.add(i);
        }
        while (queue.size()>1){//큐 사이즈가 1이 되면 카드가 1개 남은것. 그때 반복문을 종료하면 된다.
            queue.remove();//맨 앞을 삭제한다
            queue.add(queue.poll());//그 다음에 있는 것을 맨 뒤로 보내준다.
        }
        System.out.println(queue.poll());
    }
}
