// Java Program to merging of two arrays..........

import java.io.*; 

public class Main { 
	public static void main(String[] args) 
	{ 

		
		int arr1[] = { 30, 25, 40 }; 
		
		int arr2[] = { 45, 50, 55, 60, 65 };
		
		int a1 = arr1.length; 
		
		int b1 = arr2.length; 

	
		int x = a1 + b1; 

		// Creating a new array 
		int[] c = new int[x]; 

		
	
		for (int i = 0; i < a1; i = i + 1) { 
			
			c[i] = arr1[i]; 
		} 

		
		for (int i = 0; i < b1; i = i + 1) { 


			c[a1 + i] = arr2[i]; 
		} 
        System.out.println("After Merging two array is :");
		// Loop to print the elements of 
		// resultant array after merging 
		for (int i = 0; i < x; i = i + 1) { 
			
			// print the elements
			System.out.println(c[i]); 
		} 
	} 
}
