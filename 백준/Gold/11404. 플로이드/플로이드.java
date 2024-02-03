import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;


public class Main {
    static final int INF=987654321;
    public static void main(String[] args) throws Exception{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int n=Integer.parseInt(br.readLine());//도시(정점)의 개수
        int m=Integer.parseInt(br.readLine());//버스(간선)의 개수
        int[][] arr=new int[n+1][n+1];//플로이드-워셜 테이블 생성

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) {
                arr[i][j] = INF;//모든 노드의 거리를 무한대로 설정한다.

                if(i==j){
                    arr[i][j]=0;//시작과 끝이 같으므로, 거리는 0이 되어야만 한다.
                }
            }
        }

        for(int i=0; i<m; i++){
            st=new StringTokenizer(br.readLine());
            int a=Integer.parseInt(st.nextToken());//출발 노드
            int b=Integer.parseInt(st.nextToken());//도착 노드
            int c=Integer.parseInt(st.nextToken());//가중치

            arr[a][b]=Math.min(arr[a][b],c);//원래 있는 가중치와 간선으로 받은 가중치중 더 작은 것을 넣어준다.
        }

        //플로이드-워셜 실행
        for(int k=1; k<=n; k++) {//경유 노드
            for (int i = 1; i <= n; i++) {//시작 노드
                for (int j = 1; j <= n; j++) {//도착 노드
                    if(arr[i][j]>arr[i][k]+arr[k][j]){
                        arr[i][j]=arr[i][k]+arr[k][j];
                    }
                }
            }
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(arr[i][j]==INF){
                    arr[i][j]=0;
                }
                System.out.print(arr[i][j]+" ");
            }
            System.out.print("\n");
        }
    }

}