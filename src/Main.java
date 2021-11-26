import java.util.*;

public class Main
{
	public static void main(String[] args)
	{
		int X[]=new int[50];
		Scanner scanner=new Scanner(System.in);
		System.out.print("How may elements are there? ");
		int n=scanner.nextInt();
		System.out.print("​Enter elements : ​"); 

		for (int i=0;i < n;i++)
		{
			X[i] = scanner.nextInt();
		}

		int sum=0;
		for(int i=0;i<n;i++){
			sum+=X[i];
		}
		float mean=(float)sum/n;
		System.out.println("Mean of the series is :"+mean);
	}
}
