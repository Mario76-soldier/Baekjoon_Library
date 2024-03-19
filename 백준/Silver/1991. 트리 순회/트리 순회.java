import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

class Node{
    char value;
    Node left;
    Node right;
    public Node(char value){
        this.value=value;//노드의 데이터
        this.left=null;//오른쪽 자식 노드 처음엔 없다.
        this.right=null;//왼쪽 자식 노드 처음엔 없다.
    }
}

public class Main {//여기에서는 node 객체를 생성한 후, 풀이하는 방법을 기술한다.
    static Node[] tree;//노드 배열. 노드들을 저장하기 위함.(사실, 트리라는 클래스를 만들어서 할 수도 있겠지만, 다소 비효율적으로 바뀔 것이다.)
    public static void preorder(Node node) {//전위순회
        if (node == null) return;
        System.out.print(node.value);//자기자신 1
        preorder(node.left);//왼쪽 2
        preorder(node.right);//오른쪽 3
    }
    public static void inorder(Node node) {//중위순회
        if (node == null) return;
        inorder(node.left);//왼쪽1
        System.out.print(node.value);//자기자신2
        inorder(node.right);//오른쪽3
    }
    public static void postorder(Node node) {//후위순회
        if (node == null) return;
        postorder(node.left);//왼쪽1
        postorder(node.right);//오른쪽2
        System.out.print(node.value);//자기자신3
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());//전체 노드의 갯수 입력
        tree=new Node[n+1];//노드들에 대한 배열 생성
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine()); // 띄어쓰기 기준으로 문자열 분리
            char parentValue = st.nextToken().charAt(0);//부모, 왼쪽, 오른쪽 순으로 문자를 받아온다.
            char leftValue = st.nextToken().charAt(0);
            char rightValue = st.nextToken().charAt(0);

            if (tree[parentValue - 'A'] == null) { // 부모 노드가 아직 생성되지 않은 경우. 대문자에서 A를 빼면 알파벳 순서대로 0부터 25까지 나온다.
                //만약, 이 if문이 없다면 예제 입력 1의 3번째 줄 입력 받을때 B에 대해 중복으로 받아서 덮어써지는 효과가 발생할 것. 즉, 포인터로 연결된 객체가 소멸되는 효과가 나타날 수도 있는 것이다.
                tree[parentValue - 'A'] = new Node(parentValue); // 부모 노드를 생성
            }
            if (leftValue != '.') { // 왼쪽 자식이 존재할 경우
                tree[leftValue - 'A'] = new Node(leftValue); // 왼쪽 자식 노드를 생성
                tree[parentValue - 'A'].left = tree[leftValue - 'A']; // 부모 노드와 연결
            }
            if (rightValue != '.') { // 오른쪽 자식이 존재할 경우
                tree[rightValue - 'A'] = new Node(rightValue); // 오른쪽 자식 노드를 생성
                tree[parentValue - 'A'].right = tree[rightValue - 'A']; // 부모 노드와 연결
            }
        }
        preorder(tree[0]);
        System.out.println();

        inorder(tree[0]);
        System.out.println();

        postorder(tree[0]);
        System.out.println();
    }
}