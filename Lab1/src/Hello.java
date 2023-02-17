/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca*
****************************************/

import java.util.Scanner;

public class Hello {
	
	 

 public static void main(String[] args) {
 
  Scanner scan = new Scanner(System.in); // or use bufferedReaders or Console 
  System.out.print("Please enter your name: ");
  String name = scan.next();

  System.out.print("Please enter an integer number: ");
  int a = scan.nextInt();

  int b = a * 3;
  int c = a * 4; 
  
  System.out.println("Hi " + name +", you entered " + a + ". Triple and quadruple of " + a + " are " + b +" and " + c + ", respectively." );       
  System.out.printf("Hi %s, you entered %d. Triple and quadruple of %d are %d and %d, respectively.\n", name, a, a, b, c);
  
  System.out.println("Hello World!");

  char aCh = '3';
  System.out.println(aCh + " " +  (aCh+0) );

  System.out.println(aCh+4);
  System.out.println(aCh - '0');
  System.out.println(aCh - '0' + 4);
  System.out.println(aCh > 40); 

  System.out.println();

  // the folllowing code simulate the c code shown on slide 
  char le = 'J';  // 74
  while (le <= 'Q') {
     System.out.println ((le+0) + " "+le + " " + le + "ack" + " " + (char)(le+1));
     System.out.printf("%d %c %cack %c\n\n", (int)le, le, le, le+1);
     le++;
 }   
  
  double d = 3.8;
  int as = (int) d;
  System.out.println(as);
  int x = 5;
  int y = 2;
  float f = 2.0f;
  System.out.println(f/x);
  
  float i = 512.0f;
  //int fx = i;
  
  
  int x1 =  'K' + 32;
  System.out.println(x1);
  
  float r = 3.9f;
  double p = r;
  
//  float dq = 3.8f;
//  int az = dq;   (not valid)  (Valid if double az = dq;)
  
  
 }


 
 
}

