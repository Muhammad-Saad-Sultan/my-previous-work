#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int size = 100;
    float temp;
    int count = 0;
    int table_entry = 9;
    int roll;
    int counter = 0;
    int count2 = 0;
    char ch;
    bool print = true;
    
    int rollnumber[size] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};

    float midterm [size] =  {10.5,36,40,22,37,31,72,69,28,16,11,80,1.3,  9.5,  4.6,  5.8,  7.2,  8.5,  6.9,  3.1,  2.4,  4.2, 7.4,  0.9,  8.9,  4.9,  5.3,  7.8,  6.3,  2.6,  3.7,  1.2, 9.6,  5.2,  7.1,  6.7,  4.3,  8.3,  2.7,  1.5,  3.6,  0.8,22.4,34.6,44.5,44.6,44.7,44.8,44.9,23.4};
    float finalterm [size]= {55,75.5,62.6,80,53,51.2,67,44,27.5,94,36,24,76,58,54,87,12,43,65,76,87,98,98,97,93,65,23,56,44,33,88,77,66,11,12,13,43,42,41,66.8,56.4,45.3,78.9,45.3,45.1,22.6,22.8,12,61,65};
    
    float mid[size] , final[size], weightage[size];
    char grade[size];
    
    bool flag = true;

// First we determine how many entries  stored in an array
   for (int i = 0; i < 100; i++) 
   {
        if (rollnumber[i] != '\0')
		{
            count++;
        }
   }

// Now we  determine the Weightage percentage
    for(int i = 0 ; i < count ; i++ )
	{
        mid[i]= (midterm[i]/50)*100;
        final[i]= (finalterm[i]/100)*100;
        weightage[i]= (mid[i]*40)/100 + (final[i]*60)/100;
    }

    for(int i=0; i< count; i++)
	{
        if(weightage[i] < 50) 
		{
            grade[i] = 'F' ;
        }
         if(weightage[i] >= 50 && weightage[i] <= 59)
		{
            grade[i] = 'D';
        }
         if(weightage[i] >=59 && weightage[i] <= 72)
		{
            grade[i] = 'C';
        }
         if(weightage[i] >= 72 && weightage[i] <=85)
		{
            grade[i] = 'B';
        }
         if(weightage[i] >= 85 && weightage[i]<=100)
		{
            grade[i] = 'A';
        }
    }

    cout << "Roll Number\t" <<"MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
    for (int i =0; i < count ; i++)
	{
        cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl; 
    }

    cout<< endl;
    
    // start a new
    
    int user;
    char a;
    
    
   while(true)
   {
		print = true;
		cout<< "Enter the following: "<< endl;
		cout<< endl;
		cout<< "1.To sort and display all the records Rollno. wise in ascending and descending order. "<< endl;
		cout<< "2.To Sort and display all records in ascending and descending order based on marks in Midterm. "<< endl;
		cout<< "3.To Sort and display all records in ascending and descending order based on marks in Finalterm. "<< endl;
		cout<< "4.To Sort and display all records in ascending and descending order based on marks in Weighted percentage. "<< endl;
		cout<< "5.To Sort and display all records in ascending and descending order based on marks in  Grades. "<< endl;
		cout<< "6.To add a new entery of the Student. "<< endl;
		cout<< "7.To delete the student record based on roll number."<<endl;
		cout<< "8.To Display record of all the students greater than X weighted percentage in ascending and descending  order with respect to WP; "<<endl;
		cout<< "9.To Display record of all the students less than or equal to X weighted percentage in ascending and descending order with respect to WP: "<<endl;
		cout<< "10.To Display record of all the students greater than X grade in ascending and descending order with respect to grade: "<<endl;
		cout<< "11.To Display record of all the students less than or equal to X grade in ascending and descending order with respect to grade: "<<endl;
		cout<< "12.To Display record of all the students equal  to X grade in ascending and descending order with respect to their Roll number: "<<endl;
		cout<< "13.To Display record of all the students equal to  X grade in ascending and descending order with respect to their Weightage: "<<endl;
		cout<< "14.To Display record of all the students with X grade in ascending and descending order with respect to their WP: "<<endl;
		cout<< "15.To Display total count of students out of 100 with WP less than or greater than equal to X: "<<endl;
		cout<< "16.To Display total count of students out of 100 with grade equal to X: "<<endl;        
		cout<< "Enter: "; 
		cin >> user;
        

         if(user == 0)
        {
        	break;
		}
        
//Now for Condition '1'----------------------------------------------------------------------------
        else if(user == 1)
		{
	            cout<< "Enter 'A' for ascending or 'D' for descending: ";
	            cin >> a;
	            if (a == 'A')
		{
	        for (int i =0 ; i < count; i++)
			{ 
	            for(int j =i+1; j < count;j++)
				{
	                if (rollnumber[i]>rollnumber[j])
					{
	                    temp=rollnumber[i];
	                    rollnumber[i]=rollnumber[j];
	                    rollnumber[j]=temp;
	                    
	                     temp=midterm[i];
	                     midterm[i]=midterm[j];
	                     midterm[j]=temp;
	
	                     temp=finalterm[i];
	                     finalterm[i]=finalterm[j];
	                     finalterm[j]=temp;
	
	                     temp=weightage[i];
	                     weightage[i]=weightage[j];
	                     weightage[j]=temp;
	
	                     temp=grade[i];
	                     grade[i]=grade[j];
	                     grade[j]=temp;
	                }
	            }
	            
	        }
	
	    }
	    else if(a == 'D')
		{
	        for (int i =0 ; i < count; i++)
			{
	            for(int j =i+1; j < count;j++)
				{
	                if (rollnumber[i]<rollnumber[j])
					{
	                    temp=rollnumber[i];
	                    rollnumber[i]=rollnumber[j];
	                    rollnumber[j]=temp;
	
	                    temp=midterm[i];
	                     midterm[i]=midterm[j];
	                     midterm[j]=temp;
	
	                     temp=finalterm[i];
	                     finalterm[i]=finalterm[j];
	                     finalterm[j]=temp;
	
	                     temp=weightage[i];
	                     weightage[i]=weightage[j];
	                     weightage[j]=temp;
	
	                     temp=grade[i];
	                     grade[i]=grade[j];
	                     grade[j]=temp;
	                     
	                }
	            }
	            
	        }
	
	     }
  }
//Now for Condition '2'---------------------------------------------------------------------------------
	    else if (user == 2)
		{
	        cout<< "Enter 'A' for ascending or 'D' for descending: ";
	        cin >> a;
	        if(a == 'A')
		{
	            for (int i =0 ; i < count; i++)
			{
	            for(int j =i+1; j < count;j++)
				{
	                if (midterm[i]>midterm[j])
					{
	                    temp=rollnumber[i];
	                    rollnumber[i]=rollnumber[j];
	                    rollnumber[j]=temp;
	                    
	                     temp=midterm[i];
	                     midterm[i]=midterm[j];
	                     midterm[j]=temp;
	
	                     temp=finalterm[i];
	                     finalterm[i]=finalterm[j];
	                     finalterm[j]=temp;
	
	                     temp=weightage[i];
	                     weightage[i]=weightage[j];
	                     weightage[j]=temp;
	
	                     temp=grade[i];
	                     grade[i]=grade[j];
	                     grade[j]=temp;
	                }
	            }
	            
	        }
	     }
	        else if(a == 'D')
		{
	            for (int i =0 ; i < count; i++)
			{
	            for(int j =i+1; j < count;j++)
				{
	                if (midterm[i]<midterm[j])
					{
	                    temp=rollnumber[i];
	                    rollnumber[i]=rollnumber[j];
	                    rollnumber[j]=temp;
	
	                    temp=midterm[i];
	                     midterm[i]=midterm[j];
	                     midterm[j]=temp;
	
	                     temp=finalterm[i];
	                     finalterm[i]=finalterm[j];
	                     finalterm[j]=temp;
	
	                     temp=weightage[i];
	                     weightage[i]=weightage[j];
	                     weightage[j]=temp;
	
	                     temp=grade[i];
	                     grade[i]=grade[j];
	                     grade[j]=temp;
	                     
	                }
	            }
	            
	        }
	    }
        
  }
//Now for Condition '3'--------------------------------------------------------------------
            else if (user == 3)
			{
        cout<< "Enter 'A' for ascending or 'D' for descending:";
        cin >> a;
        if(a == 'A')
		{
            for (int i =0 ; i < count; i++)
		 {
            for(int j =i+1; j < count;j++)
			{
                if (finalterm[i]>finalterm[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;
                    
                     temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                }
            }
            
        }
    }
        else if(a == 'D')
	{
            for (int i =0 ; i < count; i++)
		{
            for(int j =i+1; j < count;j++)
			{
                if (finalterm[i]<finalterm[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
    }
        
  }
//Now for Condition '4'----------------------------------------------------------------------------------------
            else if (user == 4)
			{
        cout<< "Enter 'A' for ascending or 'D' for descending:";
        cin >> a;
        if(a == 'A')
	{
            for (int i =0 ; i < count; i++)
		{
            for(int j =i+1; j < count;j++)
			{
                if (weightage[i]>weightage[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;
                    
                     temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                }
            }
            
        }
     }
        else if(a == 'D')
	{
            for (int i =0 ; i < count; i++)
		{
            for(int j =i+1; j < count;j++)
			{
                if (weightage[i]<weightage[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
      }
        
    }
//Now for  Condition '5'---------------------------------------------------------------------------------------------
            else if (user == 5)
{
        cout<< "Enter 'A' for ascending or 'D' for descending: ";
        cin >> a;
        if(a == 'A')
	{
            for (int i =0 ; i < count; i++)
		{
            for(int j =i+1; j < count;j++)
			{
                if (grade[i]>grade[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;
                    
                     temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                }
            }
            
        }
     }
        else if(a == 'D')
	{
            for (int i =0 ; i < count; i++)
		{
            for(int j =i+1; j < count;j++)
			{
                if (grade[i]<grade[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
    }
        
  }
//Now for Condition '6' -------------------------------------------------------------------------------------------
        
        else if (user == 6)
	{
		print = false;
		bool check_entry = false;
		int roll;
		float mid_term;
		float final_term;
    while(true)
	{
        check_entry = false;
		cout << "Enter Rollno: ";
        cin >> roll;
        for(int i=0; i < count; i++ )
        {
        	if (rollnumber[i] == roll)
			{
        		check_entry = true;
			}
		}
		if (check_entry == true) 
		{
		cout << "Roll number is already exist.";
		cout << endl;
		cout << "Kindly type again roll number which is unique and do not match with shown below.";
		cout << endl;
		
		// start again by asking roll number
		}
		 else 
		{
			// unique number is enter
			// add user entery to table.
		    cout << "Enter Midterm marks: ";
            cin >> mid_term;
            cout << "Enter Finalterm marks: ";
			cin >> final_term;
			rollnumber[count] = roll;
			midterm [count] = mid_term;
			finalterm [count] = final_term;
			count = count + 1;
			
			 for(int i = 0 ; i < count ; i++ )
	{
        mid[i]= (midterm[i]/50)*100;
        final[i]= (finalterm[i]/100)*100;
        weightage[i]= (mid[i]*40)/100 + (final[i]*60)/100;
    }

    for(int i=0; i< count; i++)
	{

        if(weightage[i] < 50) 
		{
            grade[i] = 'F' ;
        }
         if(weightage[i] >= 50 && weightage[i] <= 59)
		{
            grade[i] = 'D';
        }
         if(weightage[i] >= 60 && weightage[i] < 72)
		{
            grade[i] = 'C';
        }
         if(weightage[i] >= 72 && weightage[i] < 85)
		{
            grade[i] = 'B';
        }
         if(weightage[i] >= 85)
		{
            grade[i] = 'A';
        }
    }
			  break;
		}
  }
      cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
        for (int i =0; i < count ; i++)
	  {
        cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl; 
      }

    }
  

// Now Condition For delete --------------------------------------------------------------
   
   else if (user == 7)
{
	       int roll;
           cout << "Enter roll number to be removed: ";
           cin >> roll;
			for (int i = 0; i < count; i++)
			 {
				if (roll == rollnumber[i]) 
				{
					for (int j = i; j < count - 1; j++)
					 {
						rollnumber[j] = rollnumber[j + 1];
						midterm[j] = midterm[j + 1];
						finalterm[j] = finalterm[j + 1];
						weightage[j] = weightage[j + 1];
						grade[j] = grade[j + 1];
					}
					i--;
					count--;
				}
					
        
			}
}

//Condition 8------------------------------------------------------------------------------------------------------------------
	
              else if (user == 8)
			{
			print = false;
            float num;
            cout << "Enter a Weightage: ";
            cin >> num;
            cout<< "Enter 'A' for acending or 'D' for decending: ";
            cin >> ch;
           	cout << endl;
            
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;

            if(ch =='A')
			{
				cout << endl;
                for (int i=0; i< count; i++)
				{
                	for(int j=i+1; j< count; j++)
					{
               		 if (weightage[i] > weightage[j])
						{
		                    temp=rollnumber[i];
		                    rollnumber[i]=rollnumber[j];
		                    rollnumber[j]=temp;
		                    
		                     temp=midterm[i];
		                     midterm[i]=midterm[j];
		                     midterm[j]=temp;
		
		                     temp=finalterm[i];
		                     finalterm[i]=finalterm[j];
		                     finalterm[j]=temp;
		
		                     temp=weightage[i];
		                     weightage[i]=weightage[j];
		                     weightage[j]=temp;
		
		                     temp=grade[i];
		                     grade[i]=grade[j];
		                     grade[j]=temp;
                	}
             	  }
              }
              cout << endl;
          }
            else if(ch == 'D')
			{
            for (int i =0 ; i < count; i++)
			{
            for(int j =i+1; j < count;j++)
			{
                if (weightage[i]<weightage[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
         
     }
            
			for(int i=0; i <= count;i++)
			{
                if(weightage[i] > num)
				{
					cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;
				}
            }
        
            
            
        }
            
//condition 9------------------------------------------------------------------------------------------------------------------
        else if (user == 9)
		{
			print =false;
            float num;
            cout << "Enter a Weightage: ";
            cin >> num;
            cout<< "Enter 'A' for acending or 'D' for decending: ";
            cin >> ch;
            cout << endl;
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
            
            if(ch =='A')
			{
                for (int i =0 ; i < count; i++)
				{
                for(int j =i+1; j < count;j++)
				{
                if (weightage[i]>weightage[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;
                    
                     temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                   }
               }
            }
        }
            else if(ch == 'D')
			{
             for (int i =0 ; i < count; i++)
			 {
              for(int j =i+1; j < count;j++)
			  {
                if (weightage[i]<weightage[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
    }
        	for(int i=0; i <= count;i++)
			{
                if(weightage[i] >= num)
				{
					cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;
				}
            }
        }
// Condition 10-----------------------------------------------------------------------------------------------------------------------
        else if (user == 10)
		{
			print = false;
            char num;
            cout << "Enter a Grade: ";
            cin >> num;
            cout<< "Enter 'A' for acending or 'D' for decending: ";
            cin >> ch;
            cout << endl;
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
            if(ch =='A')
			{
                for (int i =0 ; i < count; i++) {
                	for ( int j =i+1; j < count;j++)
					    {
							if (grade[i]>grade[j])
								{
				                    temp=rollnumber[i];
				                    rollnumber[i]=rollnumber[j];
				                    rollnumber[j]=temp;
				                    
				                    temp=midterm[i];
				                    midterm[i]=midterm[j];
				                    midterm[j]=temp;
				
				                    temp=finalterm[i];
				                    finalterm[i]=finalterm[j];
				                    finalterm[j]=temp;
				
				                    temp=weightage[i];
				                    weightage[i]=weightage[j];
				                    weightage[j]=temp;
				
				                    temp=grade[i];
				                    grade[i]=grade[j];
				                    grade[j]=temp;
				                }
				       }
               }
		   }
            else if(ch == 'D')
			{
            for (int i =0 ; i < count; i++)
			{
            for(int j =i+1; j < count;j++)
			{
                if (grade[i]<grade[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
      }
            for(int i=0; i < count;i++)
		{
            if(grade[i] > num)
			{
				
            cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;

            }
        }
    }
// Condition 11----------------------------------------------------------------------------------------------------------------------------
            else if (user == 11)
		{
			print = false;
            char num;
            cout << "Enter a Grade: ";
            cin >> num;
            cout<< "Enter 'A' for acending or 'D' for decending: ";
            cin >> ch;
            cout<<endl;
            
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
            if(ch =='A')
			{
                  for (int i =0 ; i < count; i++)
				{
                    for(int j =i+1; j < count;j++)
			      	{
                     if (grade[i]>grade[j])
				      {
                       temp=rollnumber[i];
                       rollnumber[i]=rollnumber[j];
                       rollnumber[j]=temp;
                    
                       temp=midterm[i];
                       midterm[i]=midterm[j];
                       midterm[j]=temp;

                       temp=finalterm[i];
                       finalterm[i]=finalterm[j];
                       finalterm[j]=temp;

                       temp=weightage[i];
                       weightage[i]=weightage[j];
                       weightage[j]=temp;

                       temp=grade[i];
                       grade[i]=grade[j];
                       grade[j]=temp;
                     }
                   }
                }
            }
            else if(ch == 'D')
			{
            for (int i =0 ; i < count; i++)
			{
            for(int j =i+1; j < count;j++)
			{
                if (grade[i]<grade[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
        }
        for(int i=0; i < count;i++)
		{
            if(grade[i] <= num)
			{
            cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;

                }
            }
        }
// Condition 12------------------------------------------------------------------------------------------------------------------
        else if (user == 12)
	{
		    print = false;
            char num;
            cout << "Enter a Grade: ";
            cin >> num;
            cout<< "Enter 'A' for acending or 'D' for decending: ";
            cin >> ch;
            
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
            if(ch =='A')
			{
                for (int i =0 ; i < count; i++)
				{
                  for(int j =i+1; j < count;j++)
				   {
                     if (rollnumber[i]>rollnumber[j])
				       {
                          temp=rollnumber[i];
                          rollnumber[i]=rollnumber[j];
                          rollnumber[j]=temp;
                    
                          temp=midterm[i];
                          midterm[i]=midterm[j];
                          midterm[j]=temp;

                          temp=finalterm[i];
                          finalterm[i]=finalterm[j];
                          finalterm[j]=temp;

                          temp=weightage[i];
                          weightage[i]=weightage[j];
                          weightage[j]=temp;

                          temp=grade[i];
                          grade[i]=grade[j];
                          grade[j]=temp;
                       }
                   }
                }
            }
            else if(ch == 'D')
			{
             for (int i =0 ; i < count; i++)
			 {
               for(int j =i+1; j < count;j++)
			  {
                if (rollnumber[i]<rollnumber[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
              }
            
            }
          }
        for(int i=0; i < count;i++)
		{
            if(grade[i] == num)
			{
            cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;
            }
        }
    }
// Condition 13----------------------------------------------------------------------------------------------------
        else if (user == 13 )
	  {
	  	    print = false;
            char num;
            cout << "Enter a Grade: ";
            cin >> num;
            cout<< "Enter 'A' for acending or 'D' for decending: ";
            cin >> ch;
            cout << endl;
            
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
            if(ch =='A')
			{
                for (int i =0 ; i < count; i++)
				  {
                   for(int j =i+1; j < count;j++)
				    {
                     if (weightage[i]>weightage[j])
				     {
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;
                    
                     temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     }
                    }
                  }
            }
            else if(ch == 'D')
			{
            for (int i =0 ; i < count; i++)
			{
            for(int j =i+1; j < count;j++)
			{
                if (weightage[i]<weightage[j])
				{
                    temp=rollnumber[i];
                    rollnumber[i]=rollnumber[j];
                    rollnumber[j]=temp;

                    temp=midterm[i];
                     midterm[i]=midterm[j];
                     midterm[j]=temp;

                     temp=finalterm[i];
                     finalterm[i]=finalterm[j];
                     finalterm[j]=temp;

                     temp=weightage[i];
                     weightage[i]=weightage[j];
                     weightage[j]=temp;

                     temp=grade[i];
                     grade[i]=grade[j];
                     grade[j]=temp;
                     
                }
            }
            
        }
    }
        for(int i=0; i < count;i++)
		{
            if(grade[i] == num)
			{
            cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;
            }
        }
       }
// Condition 14-----------------------------------------------------------------------------------------------------------------------
        else if (user == 14 )
		{
			print =false;
            float num;
            cout << "Enter a Weightage: ";
            cin >> num;
            
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
	        for(int i=0; i < count; i++)
			{
	            if(weightage[i] <= num)
				{
	            cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;
	            count2++;   
	            }
	        }
	        cout << "Number if Students = " << count2 << endl;

        }
        
  // Condition 15---------------------------------------------------------------------------------------------------------------      

        else if (user == 15)
		{
			print=false;
            float num;
            cout << "Enter a Weightage: ";
            cin >> num;
            
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
            cout << endl;
	        for(int i=0; i <= count;i++)
			 {
	            if(weightage[i] >= num)
				{
	            cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;
	            count2++;   
	            }
	         }
            cout << "Number if Students = " << count2 << endl;
            
        }
        
 // Condition 16---------------------------------------------------------------------------------------------------------------    
 
 
        else if (user == 16)
		{
			print = false;
            char num;
            cout << "Enter a Grade: ";
            cin >> num;
            cout<<endl;
            
            cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
        for(int i=0; i <= count;i++)
		{
            if(grade[i] == num)
			{
            cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl;
            count2++;   
                }
            }
            cout << "Number if students = " << count2;
            cout << endl;
          
       }
        else 
		{
            cout << "Error!" << endl;
        }
        
        
        if (print) 
		{
		    cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
        	for (int i =0; i < count ; i++)
			{
       		cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl; 	
	    	}
        }
    

    
  
    
    
    
// Finally End...................................................................................................


}

    return 0;
}
