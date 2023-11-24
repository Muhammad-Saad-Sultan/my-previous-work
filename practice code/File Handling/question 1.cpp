#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void  Sizeofarrayfromfile(char* filename,int& numCandidates);
void ReadCandidateData(char *filename, int* candidateIds, int* votesReceived, int numCandidates);
int calculateTotalVotes(int* votesReceived, int numCandidates);
void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates);
int findWinnerIndex(int* votesReceived, int numCandidates);
void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
int* dynamic(int numCandidates);
double* dynamic_allocation(int numCandidates);

int main ()
{
	int numCandidates=0;
	char* file=new char[40];
	file={"election.txt"};
	Sizeofarrayfromfile(file,numCandidates);
    int* candidateIds=dynamic(numCandidates);
    int* votesReceived=dynamic(numCandidates);
	ReadCandidateData(file,candidateIds,votesReceived,numCandidates);
	int total=calculateTotalVotes(votesReceived,numCandidates);
    double* votePercentages=dynamic_allocation(numCandidates);
    calculateVotePercentages(votePercentages,votesReceived,total,numCandidates);
    int max_index=findWinnerIndex(votesReceived,numCandidates);
    displayCandidateInfo(candidateIds,votesReceived,votePercentages,numCandidates);
    writeToFile(candidateIds,votesReceived,votePercentages,numCandidates);
    cout<<"Total Votes are: "<<total<<endl;
    ofstream fout("winner.txt",ios::app);
    fout<<endl<<"Total Votes are : "<<total<<endl;
    cout<<"Winner of Election is: ";
    fout<<"Winner of Election is: ";
    for(int i=0;i<numCandidates;i++)
    {
    	if(i==max_index)
    	{
		fout<<candidateIds[i]<<", "<<votesReceived[i]<<", "<<setprecision(4)<<votePercentages[i]<<" %"<<endl; 		
		cout<<candidateIds[i]<<", "<<votesReceived[i]<<", "<<setprecision(4)<<votePercentages[i]<<" %"<<endl;		
		}
	}
	delete[] candidateIds;
	delete[] votesReceived;
    delete[] votePercentages;
    file=NULL;
    delete[] file;
}
void  Sizeofarrayfromfile(char* filename,int& numCandidates)
{
	char* waste=new char[50];
	ifstream fin(filename);
	fin.getline(waste,50);
	delete[] waste;
	int id,vote;
	numCandidates=0;
	while(fin>>id)
	{
		fin>>vote;
		numCandidates++;
	}
}
void ReadCandidateData(char *filename, int* candidateIds, int* votesReceived, int numCandidates)
{
	char* waste=new char[50];
	ifstream fin(filename);
	fin.getline(waste,50);
	delete[] waste;
	int id,vote;
	numCandidates=0;
	while(fin>>candidateIds[numCandidates])
	{
		fin>>votesReceived[numCandidates];
		numCandidates++;
	}
	fin.close();
}
int calculateTotalVotes(int* votesReceived, int numCandidates)
{
	int total=0;
    for(int i=0;i<numCandidates;i++)
    {
    	total+=votesReceived[i];
	}
    return total;
}
void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates)
{
	for(int i=0;i<numCandidates;i++)
	{
		votePercentages[i]=(double(votesReceived[i])/totalVotes)*100.0;
	}   
}
int findWinnerIndex(int* votesReceived, int numCandidates)
{
	int i;
	int max_index=0;
	int max=votesReceived[0];
	for(i=0;i<numCandidates;i++)
	{
		if(max<votesReceived[i])
		{
			max_index=i;
		}
	}
	return max_index;
}
void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates)
{
	cout<<"Candidate\tVotes Received\t% of Total Votes"<<endl;
	for(int i=0;i<numCandidates;i++)
	{
		cout<<candidateIds[i]<<"\t\t"<<votesReceived[i]<<"\t\t"<<setprecision(4)<<votePercentages[i]<<" %"<<endl;
	}
	cout<<endl;
}
void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates)
{
	ofstream fout("winner.txt");
	fout<<"Candidate\tVotes Received\t% of Total Votes"<<endl;
	for(int i=0;i<numCandidates;i++)
	{
		fout<<candidateIds[i]<<"\t\t"<<votesReceived[i]<<"\t\t\t"<<setprecision(4)<<votePercentages[i]<<" %"<<endl;
	}
	fout.close();
}
int* dynamic(int numCandidates)
{
	return new int[numCandidates];
}
double* dynamic_allocation(int numCandidates)
{
	return new double[numCandidates];
}
