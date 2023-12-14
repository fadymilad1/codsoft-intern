#include<iostream>
#include<string>

using namespace std;

const int maxtasks=100;
struct Task{
    string description;
    bool done;
};
int main(){
Task tasks[maxtasks];
int numtasks=0;
cout<<" welcome to the application"<<endl;
while (true){
    cout<<"1- add task" <<endl;
    cout<< "2- view tasks"<<endl;
    cout<<"3- mark task as completed" <<endl;
    cout<<"4- remove task" <<endl;
    cout<<"5- quit" <<endl;
    int choice;
    cin>>choice;
    if (choice==1){
        if (numtasks<maxtasks){
            cout<<"enter task description: " ;
            cin.ignore();
            getline(cin, tasks[numtasks].description);
            tasks[numtasks].done=false;
            numtasks++;
            cout<<" task added "<<endl;
        }
        else {
            cout<<"task list is full and it cannot add more tasks"<<endl;
        }
    }
    else if (choice==2){
        cout<<"tasks: "<<endl;
        for(int i=0; i<numtasks; i++){
            cout<<(i+1)<<". ";
            cout<<tasks[i].description;
            if (tasks[i].done){
                cout<<" completed" <<endl;
            }
            else{
                cout<<"  pending "<<endl;
            }
        }
    }
    else if (choice==3){
        cout<<"enter the tasks number to be marked as done";
        int tasknumber;
        cin>>tasknumber;
        if (tasknumber>0 && tasknumber<=numtasks){
            tasks[tasknumber-1].done =true;
            cout<<" task number " <<tasknumber<<"is marked as done "<<endl;
        }
        else {
            cout<<" invalid task number" <<endl;
        }
    }
    else if (choice==4){
        cout<< " enter the task number to be marked as done ";
        int tasknumber;
        cin>>tasknumber;
        if (tasknumber>0 && tasknumber<=numtasks){
                for (int i= tasknumber-1; i<numtasks; i++){
                    tasks[i]=tasks[i+1];
                }
                cout<<" task number " <<tasknumber<<" is removed from the list "<<endl;
                numtasks--;
    }
    else{
        cout<<"invalid tasks number " <<endl;
        }
    }
    else if (choice==5){
        cout<<"quiting...  goodbye"<<endl;
        break;
    }
    else{
        cout<<"invalid choice select from choices (1-4)"<<endl;
    }
}
return 0;
}
