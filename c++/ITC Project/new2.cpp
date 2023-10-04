#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int size = 100;
    int rollnumber[size] = {1005, 1012, 1043, 1025, 1009, 1047, 1033, 1004, 1027, 1021};

    float midterm[size] = {45,35.5,40,40,35,33,27,36,29,17};
    float finalterm[size] = {90,75,87.5,90,70,53,70,81.5,77,65};
    float weightage[size];

    char grade[size];
    int count = 0;

    float mid[size] , final[size];
    bool flag = true;
    char user;
    char a;
    int temp;

// Now we determine how many entries currenty stored in an array
   for (int i = 0; i < 100; i++) {
        if (rollnumber[i] != '\0') {
            count++;
        }
    }

// Now we  determine the Weightage percentage
    for(int i = 0 ; i < count ; i++ ){
        mid[i]= (midterm[i]/50)*100;
        final[i]= (finalterm[i]/100)*100;
        weightage[i]= (mid[i]*40)/100 + (final[i]*60)/100;
    }

    for(int i= 0; i < count ;i++){
        if(weightage[i] < 50) {
            grade[i] = 'F' ;
        }
         if(weightage[i] >= 50 && weightage[i] <= 59){
            grade[i] = 'D';
        }
         if(weightage[i] >= 60 && weightage[i] < 72){
            grade[i] = 'C';
        }
         if(weightage[i] >= 72 && weightage[i] < 85){
            grade[i] = 'B';
        }
         if(weightage[i] >= 85){
            grade[i] = 'A';
        }
    }

    cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
    for (int i =0; i < count ; i++){
        cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl; 
    }

    cout<< endl;
    

// Start...............................................................................................
//______________________________________
   while(true){
        
        cout<< "Enter the following:"<< endl;
        cout<< endl;
        cout<< "'Enter' to enter the new entry." << endl;
        cout<< "'Delete' to remove the existing entry."<< endl;
        cout<< "1. To see the result as Rollno. wise."<< endl;
        cout<< "2. To see the result according to the Midterm marks."<<endl;
        cout<< "3. To see the result according to the Finalterm marks."<< endl;
        cout<< "4. To see the result according to the Weightage marks."<< endl;
        cout<< "5. To see the result according to the Grades."<< endl;
        cout << "Enter: ";
        cin >> user;

        if(user == 'E'){
            break;
        }
// Condition 1
        else if(user == '1'){
            cout<< "Enter 'A' for acending or 'D' for decending:";
            cin >> a;
            if (a == 'A'){
        for (int i =0 ; i < count; i++){ // {5,3,4,1,2}
            for(int j =i+1; j < count;j++){
                if (rollnumber[i]>rollnumber[j]){
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
    else if(a == 'D'){
        for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (rollnumber[i]<rollnumber[j]){
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
// Condition 2
    else if (user == '2'){
        cout<< "Enter 'A' for acending or 'D' for decending:";
        cin >> a;
        if(a == 'A'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (midterm[i]>midterm[j]){
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
        else if(a == 'D'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (midterm[i]<midterm[j]){
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
// Condition 3
            else if (user == '3'){
        cout<< "Enter 'A' for acending or 'D' for decending:";
        cin >> a;
        if(a == 'A'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (finalterm[i]>finalterm[j]){
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
        else if(a == 'D'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (finalterm[i]<finalterm[j]){
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
// Condition 4
            else if (user == '4'){
        cout<< "Enter 'A' for acending or 'D' for decending:";
        cin >> a;
        if(a == 'A'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (weightage[i]>weightage[j]){
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
        else if(a == 'D'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (weightage[i]<weightage[j]){
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
// Condition 5
            else if (user == '5'){
        cout<< "Enter 'A' for acending or 'D' for decending:";
        cin >> a;
        if(a == 'A'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (grade[i]>grade[j]){
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
        else if(a == 'D'){
            for (int i =0 ; i < count; i++){
            for(int j =i+1; j < count;j++){
                if (grade[i]<grade[j]){
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
//  Condition 11
        else if (user == '6'){
        
            for(int i=count+1;i <= count+1; i++ ){
                cout << "Enter Rollno: ";
                cin >> a;
                cin >> rollnumber[i];
                cout << "Enter Midterm marks: ";
                cin >> a;
                cin >> midterm[i];
                cout << "Enter Finalterm marks: ";
                cin >> a;
                cin >> finalterm[i];
                
                mid[i]= (midterm[i]/50)*100;
                final[i]= (finalterm[i]/100)*100;
                weightage[i]= (mid[i]*40)/100 + (final[i]*60)/100;

                if(weightage[i] < 50) {
            grade[i] = 'F' ;
        }
         if(weightage[i] >= 50 && weightage[i] <= 59){
            grade[i] = 'D';
        }
         if(weightage[i] >= 60 && weightage[i] < 72){
            grade[i] = 'C';
        }
         if(weightage[i] >= 72 && weightage[i] < 85){
            grade[i] = 'B';
        }
         if(weightage[i] >= 85){
            grade[i] = 'A';
        }
            }
            
        }
        else {
            cout << "Error!" << endl;
        }

    cout << "Roll Number\t" << "MidTerm\t\t" << "FinalTerm\t" << "Weightage\t" << "Grades" << endl;
        for (int i =0; i < count ; i++){
        cout<< rollnumber[i]<<"\t\t"<< midterm[i]<<"\t\t" << finalterm[i]<<"\t\t" << weightage[i]<<"\t\t" << grade[i]<< endl; 
    }
    }
// End...................................................................................................
//___________________________________



    return 0;
}