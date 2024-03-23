import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

class Heap{
    long[] array;
    int maxIndex;

    public Heap(){
        array=new long[300000];
        maxIndex=0;
    }
    public void push(long a){
        int cur=maxIndex;
        array[maxIndex]=a;
        maxIndex++;
        while (true){
            if(array[cur]<=array[(cur-1)/2]){
                break;
            }
            long temp;
            temp=array[cur];
            array[cur]=array[(cur-1)/2];
            array[(cur-1)/2]=temp;
            cur=(cur-1)/2;
        }
    }

    public long pop(){
        if(maxIndex==0){
            return 0;
        }
        long ret=array[0];
        array[0]=array[maxIndex-1];
        array[maxIndex-1]=0;
        maxIndex--;
        int cur=0;
        while (true){
            int childIndex;
            long child;
            if(array[cur*2+1]<array[cur*2+2]){
                childIndex=cur*2+2;
            }
            else{
                childIndex=cur*2+1;
            }
            child=array[childIndex];
            if (array[cur]>=child){
                break;
            }
            long temp;
            temp=array[cur];
            array[cur]=child;
            array[childIndex]=temp;
            cur=childIndex;
        }
        return ret;
    }
}

public class Main {//여기에서는 node 객체를 생성한 후, 풀이하는 방법을 기술한다.

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long n = Long.parseLong(br.readLine());//전체 노드의 갯수 입력
        Heap heap=new Heap();
        for(int i=0; i<n; i++){
            long a=Long.parseLong(br.readLine());
            if(a==0){
                System.out.println(heap.pop());
            }
            else{
                heap.push(a);
            }
        }
    }
}