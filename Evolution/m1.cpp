#include <iostream>
using namespace std;
void calculateBestQuiz( float quiz1[], float quiz2[], float best_quiz[], int N) {
    int i;
    for (i = 0; i < N; i++){
        if(quiz1[i] > quiz2[i])
            best_quiz[i] = quiz1[i];

        if(quiz2[i] > quiz1[i])
             best_quiz[i] = quiz2[i];
    }
    cout<< "Best Quiz:";
    for(i = 0; i < N; i++){
      cout<<  best_quiz[i] << " ";
    }
}

void minMark(float best_quiz[],int N) {
    float minMark = best_quiz[0];
    for(int i=0;i<N;i++)
    {
        if(best_quiz[i]<minMark)
            minMark = best_quiz[i];
    }
    cout<<"\nMin Mark: "<<minMark;

}

void maxMark(float best_quiz[],int N) {
    float maxMark = best_quiz[0];
    for(int i=0;i<N;i++)
    {
        if(best_quiz[i]>maxMark)
            maxMark=best_quiz[i];
    }
    cout<<"\nMax Mark: "<<maxMark;

}

int main()
{
    int N;
    cout<< "Number of students"<< endl;
    cin>> N;

    float quiz1[N], quiz2[N], best_quiz[N];
    cout << "Quiz-1 Marks:" <<endl;

    for(int i=0; i<N; i++) {
        cin>> quiz1[i];
    }

    cout << "Quiz-2 Marks:" <<endl;
    for(int i=0; i<N; i++) {
        cin>> quiz2[i];
    }
    calculateBestQuiz(quiz1,quiz2,best_quiz, N);
    minMark( best_quiz,N);
    maxMark( best_quiz,N);

    return 0;
}
