/*
 * ENES ASANA
 * 15050111020
 * 
 */

import java.util.Scanner;

public class Test {
	
	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		
		int flag = 0;
		String ctrl = "", ctrl1 = "", ctrl2 = "";
		float simRatio, common = 0, dist1 = 0, dist2 = 0;
		boolean det = false;
		
		System.out.println("Input two strings: ");
		String first = input.nextLine();
		String second = input.nextLine();
		
		for(int k = 0; k < first.length(); k++) {
			if( !(first.charAt(k)=='a' || first.charAt(k)=='b' || first.charAt(k)=='c' || first.charAt(k)=='d' || first.charAt(k)=='e') 
					|| !(second.charAt(k)=='a' || second.charAt(k)=='b' || second.charAt(k)=='c' || second.charAt(k)=='d' || second.charAt(k)=='e') ){
				System.out.println("Incorrect characters. Please use only abcde");
				break;
			}
			else {
				for(int i = 0; i < first.length(); i++) {
					
					for(int j = 0; j < second.length(); j++) {
						
						// check second
						if(flag == 0) {
							if(dist2 != 0) {
								for(int l = 0; l < dist2; l++) {
									if(second.charAt(j) == ctrl2.charAt(l)) {
										det = true;
										break;
									}
								}
								if(!det) {
									ctrl2 += second.charAt(j);
									dist2++;
								}
								det = false;
							}
							else {
								ctrl2 += second.charAt(j);
								dist2++;
							}
						}
						
						// if first same with second
						if(first.charAt(i) == second.charAt(j)) {							
							if(common != 0) {								
								for(int l = 0; l < common; l++) {									
									if(first.charAt(i) == ctrl.charAt(l)) {
										det = true;
										break;
									}
								}								
								if(!det) {
									ctrl += first.charAt(i);
									common++;
								}								
								det = false;
							}							
							else {
								ctrl += first.charAt(i);
								common++;
							}
							
						}
						flag++;
					}
					
					//check first
					if(dist1 != 0) {
						for(int l = 0; l < dist2; l++) {
							if(first.charAt(i) == ctrl1.charAt(l)) {
								det = true;
								break;
							}
						}
						if(!det) {
							ctrl1 += first.charAt(i);
							dist1++;
						}
						det = false;
					}
					else {
						ctrl1 += first.charAt(i);
						dist1++;
					}
				}
			}	
		}
		
		simRatio = common / ( ( dist1+dist2) / 2 );
		
		System.out.println("Result: "+simRatio);
	}
}