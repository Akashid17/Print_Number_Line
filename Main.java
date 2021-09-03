
import java.lang.*;
import java.util.*;

class ArithmeticX
{
	public void NumberLine(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		for(int i = (-iNo); i <= iNo; i++)
		{
			System.out.print(i+" ");
		}
		System.out.println();
	}
}

class Main
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number");
		int iValue = sobj.nextInt();

		ArithmeticX aobj = new ArithmeticX();
		aobj.NumberLine(iValue);
	}
}