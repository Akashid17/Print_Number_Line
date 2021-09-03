
using System;

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
			Console.Write(i+" ");
		}
		Console.WriteLine();
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());
		
		ArithmeticX aobj = new ArithmeticX();
		aobj.NumberLine(iValue);
	}
}