#include<iostream>
using namespace std;

void BestQuizMaerks(float quiz_1[],float quiz_2[],float Best_quiz[],int N)
{
   // float Best_quiz[N];

    for (int i=0;i < N; i++)
    {
        if(quiz_1[i]>quiz_2[i])
        {
            Best_quiz[i] = quiz_1[i];
        }
        else
        {
            Best_quiz[i] = quiz_2[i];
        }


    }
    cout<<"Best Quizzes : ";
    for (int i=0;i<N;i++)
    {
       cout<<Best_quiz[i]<<" ";

    }
}

void minMark( float Best_quiz[], int N)
{
     float minMark;
    for(int i=1;i<N;i++)
    {
        if(Best_quiz[i]<Best_quiz[0])
            minMark=Best_quiz[i];

            else
                minMark=Best_quiz[0];
    }
    cout<<"\nMin Mark : "<<minMark<<endl;
}

void maxMark(float Best_quiz[], int N)
{
 float maxMark;
    for(int i=1;i<N;i++)
    {
        if(Best_quiz[i]>maxMark)
            maxMark=Best_quiz[i];

    }
    cout<<"\nMax Mark : "<<maxMark<<endl;
}


int main()
{
    int N;

    cout<<"Enter the number of Students : ";
    cin>>N;
        float quiz_1[N], quiz_2[N],Best_quiz[N];

    cout<<"Quiz-1 Marks :"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>quiz_1[i];
    }
     cout<<"Quiz-2 Marks :"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>quiz_2[i];
    }

  BestQuizMaerks(quiz_1,quiz_2,Best_quiz,N);
  minMark(Best_quiz,N);
  maxMark(Best_quiz,N);

return 0;
}
