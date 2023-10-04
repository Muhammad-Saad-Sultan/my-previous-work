/* Version 1
#include <iostream>
#include <fstream>

using namespace std;

void Sizeofarrayfromfile(char* filename, int& numCandidates);
void ReadCandidateData(char* filename, int* candidateIds, int* votesReceived, int numCandidates);
int calculateTotalVotes(int* votesReceived, int numCandidates);
void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates);
int findWinnerIndex(int* votesReceived, int numCandidates);
void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
int* dynamic(int numCandidates);
double* dynamic1(int numCandidates);

int main() {
    char filename[] = "election_data.txt";
    int numCandidates;
    Sizeofarrayfromfile(filename, numCandidates);

    int* candidateIds = dynamic(numCandidates);
    int* votesReceived = dynamic(numCandidates);
    double* votePercentages = dynamic1(numCandidates);

    ReadCandidateData(filename, candidateIds, votesReceived, numCandidates);

    int totalVotes = calculateTotalVotes(votesReceived, numCandidates);
    calculateVotePercentages(votePercentages, votesReceived, totalVotes, numCandidates);

    displayCandidateInfo(candidateIds, votesReceived, votePercentages, numCandidates);

    int winnerIndex = findWinnerIndex(votesReceived, numCandidates);
    cout << "Total " << totalVotes << endl;
    cout << "The Winner of the Election is " << candidateIds[winnerIndex] << endl;

    writeToFile(candidateIds, votesReceived, votePercentages, numCandidates);

    delete[] candidateIds;
    delete[] votesReceived;
    delete[] votePercentages;

    return 0;
}

void Sizeofarrayfromfile(char* filename, int& numCandidates) {
    ifstream inputFile(filename);
    int id, votes;
    numCandidates = 0;

    while (inputFile >> id >> votes) {
        numCandidates++;
    }

    inputFile.close();
}

void ReadCandidateData(char* filename, int* candidateIds, int* votesReceived, int numCandidates) {
    ifstream inputFile(filename);

    for (int i = 0; i < numCandidates; i++) {
        inputFile >> candidateIds[i] >> votesReceived[i];
    }

    inputFile.close();
}

int calculateTotalVotes(int* votesReceived, int numCandidates) {
    int totalVotes = 0;

    for (int i = 0; i < numCandidates; i++) {
        totalVotes += votesReceived[i];
    }

    return totalVotes;
}

void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates) {
    for (int i = 0; i < numCandidates; i++) {
        votePercentages[i] = (static_cast<double>(votesReceived[i]) / totalVotes) * 100.0;
    }
}

int findWinnerIndex(int* votesReceived, int numCandidates) {
    int maxVotes = votesReceived[0];
    int winnerIndex = 0;

    for (int i = 1; i < numCandidates; i++) {
        if (votesReceived[i] > maxVotes) {
            maxVotes = votesReceived[i];
            winnerIndex = i;
        }
    }

    return winnerIndex;
}

void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates) {
    cout << "Candidate\tVotes Received\t% of Total Votes" << endl;


    for (int i = 0; i < numCandidates; i++) {
        cout << candidateIds[i] << "\t\t" << votesReceived[i] << "\t\t";
        cout.precision(2);
        cout << fixed << votePercentages[i] << "%" << endl;
    }

    cout << endl;
}

void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates) {
    ofstream outputFile("candidate_results.txt");

    outputFile << "Candidate\tVotes Received\t% of Total Votes" << endl;

    for (int i = 0; i < numCandidates; i++) {
        outputFile << candidateIds[i] << "\t\t" << votesReceived[i] << "\t\t";
        outputFile.precision(2);
        outputFile << fixed << votePercentages[i] << "%" << endl;
    }

    outputFile.close();
}

int* dynamic(int numCandidates) {
    return new int[numCandidates];
}
void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates) {
    cout << "Candidate\tVotes Received\t% of Total Votes" << endl;

    for (int i = 0; i < numCandidates; i++) {
        cout << candidateIds[i] << "\t\t" << votesReceived[i] << "\t\t";
        cout << static_cast<int>(votePercentages[i]) << "." << static_cast<int>((votePercentages[i] - static_cast<int>(votePercentages[i])) * 100) << "%" << endl;
    }

    cout << endl;
}

void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates) {
    ofstream outputFile("candidate_results.txt");

    outputFile << "Candidate\tVotes Received\t% of Total Votes" << endl;

    for (int i = 0; i < numCandidates; i++) {
        outputFile << candidateIds[i] << "\t\t" << votesReceived[i] << "\t\t";
        outputFile << static_cast<int>(votePercentages[i]) << "." << static_cast<int>((votePercentages[i] - static_cast<int>(votePercentages[i])) * 100) << "%" << endl;
    }

    outputFile.close();
}

int* dynamic(int numCandidates) {
    return new int[numCandidates];
}

double* dynamic1(int numCandidates) {
    return new double[numCandidates];
}
*/

/* Version 2
#include <iostream>
#include <fstream>

using namespace std;

void Sizeofarrayfromfile(char* filename, int& numCandidates);
void ReadCandidateData(char* filename, int* candidateIds, int* votesReceived, int numCandidates);
int calculateTotalVotes(int* votesReceived, int numCandidates);
void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates);
int findWinnerIndex(int* votesReceived, int numCandidates);
void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
int* dynamic(int numCandidates);
double* dynamic1(int numCandidates);

int main() {
    char filename[] = "election_data.txt";
    int numCandidates;
    Sizeofarrayfromfile(filename, numCandidates);

    int* candidateIds = dynamic(numCandidates);
    int* votesReceived = dynamic(numCandidates);
    double* votePercentages = dynamic1(numCandidates);

    ReadCandidateData(filename, candidateIds, votesReceived, numCandidates);

    int totalVotes = calculateTotalVotes(votesReceived, numCandidates);
    calculateVotePercentages(votePercentages, votesReceived, totalVotes, numCandidates);

    displayCandidateInfo(candidateIds, votesReceived, votePercentages, numCandidates);

    int winnerIndex = findWinnerIndex(votesReceived, numCandidates);
    cout << "Total " << totalVotes << endl;
    cout << "The Winner of the Election is " << candidateIds[winnerIndex] << endl;

    writeToFile(candidateIds, votesReceived, votePercentages, numCandidates);

    delete[] candidateIds;
    delete[] votesReceived;
    delete[] votePercentages;

    return 0;
}

void Sizeofarrayfromfile(char* filename, int& numCandidates) {
    ifstream inputFile(filename);
    int id, votes;
    numCandidates = 0;

    while (inputFile >> id >> votes) {
        numCandidates++;
    }

    inputFile.close();
}

void ReadCandidateData(char* filename, int* candidateIds, int* votesReceived, int numCandidates) {
    ifstream inputFile(filename);

    for (int i = 0; i < numCandidates; i++) {
        inputFile >> candidateIds[i] >> votesReceived[i];
    }

    inputFile.close();
}

int calculateTotalVotes(int* votesReceived, int numCandidates) {
    int totalVotes = 0;

    for (int i = 0; i < numCandidates; i++) {
        totalVotes += votesReceived[i];
    }

    return totalVotes;
}

void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates) {
    for (int i = 0; i < numCandidates; i++) {
        votePercentages[i] = (static_cast<double>(votesReceived[i]) / totalVotes) * 100.0;
    }
}

int findWinnerIndex(int* votesReceived, int numCandidates) {
    int maxVotes = votesReceived[0];
    int winnerIndex = 0;

    for (int i = 1; i < numCandidates; i++) {
        if (votesReceived[i] > maxVotes) {
            maxVotes = votesReceived[i];
            winnerIndex = i;
        }
    }

    return winnerIndex;
}

void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates) {
    cout << "Candidate\tVotes Received\t% of Total Votes" << endl
*/

/* final q1
#include <iostream>
#include <fstream>

using namespace std;

void Sizeofarrayfromfile(char* filename, int& numCandidates);
void ReadCandidateData(char* filename, int* candidateIds, int* votesReceived, int numCandidates);
int calculateTotalVotes(int* votesReceived, int numCandidates);
void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates);
int findWinnerIndex(int* votesReceived, int numCandidates);
void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates);
int* dynamic(int numCandidates);
double* dynamic1(int numCandidates);

int main() {
    char filename[] = "election_data.txt";
    int numCandidates;
    Sizeofarrayfromfile(filename, numCandidates);

    int* candidateIds = dynamic(numCandidates);
    int* votesReceived = dynamic(numCandidates);
    double* votePercentages = dynamic1(numCandidates);

    ReadCandidateData(filename, candidateIds, votesReceived, numCandidates);

    int totalVotes = calculateTotalVotes(votesReceived, numCandidates);
    calculateVotePercentages(votePercentages, votesReceived, totalVotes, numCandidates);

    displayCandidateInfo(candidateIds, votesReceived, votePercentages, numCandidates);

    int winnerIndex = findWinnerIndex(votesReceived, numCandidates);
    cout << "Total " << totalVotes << endl;
    cout << "The Winner of the Election is " << candidateIds[winnerIndex] << endl;

    writeToFile(candidateIds, votesReceived, votePercentages, numCandidates);

    delete[] candidateIds;
    delete[] votesReceived;
    delete[] votePercentages;

    return 0;
}

void Sizeofarrayfromfile(char* filename, int& numCandidates) {
    ifstream inputFile(filename);
    int id, votes;
    numCandidates = 0;

    while (inputFile >> id >> votes) {
        numCandidates++;
    }

    inputFile.close();
}

void ReadCandidateData(char* filename, int* candidateIds, int* votesReceived, int numCandidates) {
    ifstream inputFile(filename);

    for (int i = 0; i < numCandidates; i++) {
        inputFile >> candidateIds[i] >> votesReceived[i];
    }

    inputFile.close();
}

int calculateTotalVotes(int* votesReceived, int numCandidates) {
    int totalVotes = 0;

    for (int i = 0; i < numCandidates; i++) {
        totalVotes += votesReceived[i];
    }

    return totalVotes;
}

void calculateVotePercentages(double* votePercentages, int* votesReceived, int totalVotes, int numCandidates) {
    for (int i = 0; i < numCandidates; i++) {
        votePercentages[i] = (static_cast<double>(votesReceived[i]) / totalVotes) * 100.0;
    }
}

int findWinnerIndex(int* votesReceived, int numCandidates) {
    int maxVotes = votesReceived[0];
    int winnerIndex = 0;

    for (int i = 1; i < numCandidates; i++) {
        if (votesReceived[i] > maxVotes) {
            maxVotes = votesReceived[i];
            winnerIndex = i;
        }
    }

    return winnerIndex;
}

void displayCandidateInfo(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates) {
    cout << "Candidate\tVotes Received\t% of Total Votes" << endl;

    for (int i = 0; i < numCandidates; i++) {
        cout << candidateIds[i] << "\t\t" << votesReceived[i] << "\t\t";
        cout << static_cast<int>(votePercentages[i]) << "." << static_cast<int>((votePercentages[i] - static_cast<int>(votePercentages[i])) * 100) << "%" << endl;
    }

    cout << endl;
} // Added closing brace for the function

void writeToFile(int* candidateIds, int* votesReceived, double* votePercentages, int numCandidates) {
    ofstream outputFile("candidate_results.txt");

    outputFile << "Candidate\tVotes Received\t% of Total Votes" << endl;

    for (int i = 0; i < numCandidates; i++) {
        outputFile << candidateIds[i] << "\t\t" << votesReceived[i] << "\t\t";
        outputFile << static_cast<int>(votePercentages[i]) << "." << static_cast<int>((votePercentages[i] - static_cast<int>(votePercentages[i])) * 100) << "%" << endl;
    }

    outputFile.close();
}

int* dynamic(int numCandidates) {
    return new int[numCandidates];
}

double* dynamic1(int numCandidates) {
    return new double[numCandidates];
}
*/

/* Version 1
#include <iostream>
#include <cstring>

using namespace std;

int calculateLength(const char* binaryArray) {
    int length = 0;
    while (binaryArray[length] != '\0') {
        length++;
    }
    return length;
}

int* createDynamicArray(const char* binaryArray, int length) {
    int* dynamicArray = new int[length];
    for (int i = 0; i < length; i++) {
        dynamicArray[i] = binaryArray[i] - '0';
    }
    return dynamicArray;
}

void findMaxConsecutiveOnes(int* dynamicArray, int length) {
    int maxLength = 0;
    int maxStartIndex = -1;
    int currentLength = 0;
    int currentStartIndex = -1;

    for (int i = 0; i < length; i++) {
        if (dynamicArray[i] == 1) {
            if (currentStartIndex == -1) {
                currentStartIndex = i;
            }
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = currentStartIndex;
            }
            currentLength = 0;
            currentStartIndex = -1;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = currentStartIndex;
    }

    cout << "Maximum consecutive ones are: ";
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        cout << dynamicArray[i];
    }
    cout << endl;
    cout << "Starting index is: " << maxStartIndex << endl;
    cout << "Length is: " << maxLength << endl;
}

int main() {
    const char* binaryArray = "11010101111111110110110111010";

    int length = calculateLength(binaryArray);
    int* dynamicArray = createDynamicArray(binaryArray, length);

    findMaxConsecutiveOnes(dynamicArray, length);

    delete[] dynamicArray;

    return 0;
}
*/


#include <iostream>
#include <fstream>

using namespace std;

int calculateLength(const char* binaryArray) {
    int length = 0;
    while (binaryArray[length] != '\0') {
        length++;
    }
    return length;
}

int* createDynamicArray(const char* binaryArray, int length) {
    int* dynamicArray = new int[length];
    for (int i = 0; i < length; i++) {
        dynamicArray[i] = binaryArray[i] - '0';
    }
    return dynamicArray;
}

void findMaxConsecutiveOnes(int* dynamicArray, int length) {
    int maxLength = 0;
    int maxStartIndex = -1;
    int currentLength = 0;
    int currentStartIndex = -1;

    for (int i = 0; i < length; i++) {
        if (dynamicArray[i] == 1) {
            if (currentStartIndex == -1) {
                currentStartIndex = i;
            }
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = currentStartIndex;
            }
            currentLength = 0;
            currentStartIndex = -1;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = currentStartIndex;
    }

    cout << "Maximum consecutive ones are: ";
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        cout << dynamicArray[i];
    }
    cout << endl;
    cout << "Starting index is: " << maxStartIndex << endl;
    cout << "Length is: " << maxLength << endl;
}

int main() {
    ifstream inputFile("binary.txt");
    if (!inputFile.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    const int MAX_SIZE = 100;
    char binaryArray[MAX_SIZE];
    inputFile.getline(binaryArray, MAX_SIZE);

    int length = calculateLength(binaryArray);
    int* dynamicArray = createDynamicArray(binaryArray, length);

    findMaxConsecutiveOnes(dynamicArray, length);

    delete[] dynamicArray;

    inputFile.close();

    return 0;
}

