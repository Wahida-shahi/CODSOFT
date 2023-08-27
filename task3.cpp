/*TASK4
TO-DO LIST
Build a simple console-based to-do list manager that allows users to add, view, and delete tasks
Task Input: Allow users to input tasks they want to add to the list.
Add Task: Implement a function to add tasks to the list.
View Tasks: Display the list of tasks with their status (completed or
pending).
Mark Task as Completed: Allow users to mark tasks as completed.
Remove Task: Provide an option to remove tasks from the list.*//*done*/
#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;
string TODOLIST[10]={}; 
string TODOno[10]={};
void ADDtolist(){
    char task[50]; 
    char taskNO[5];
    cin.ignore();
    cout<<"Enter the number of task <task number>= ";
    cin.getline(taskNO,5);
    cout<<"Enter the task that you want be added in the list<task>= ";
    cin.getline(task,50);
    //array of task be empty
    for(int i=0; i<10;i++)
    {
        if(TODOno[i] =="\0")
        {
             TODOno[i]=taskNO;
             TODOLIST[i]=task;
             break;
        }
    }
}
void  Viewthelist(){
    cout<<"Current task(s) in  list \n";
    int counter=0;
    cout<<"|No|     Task|"<<endl;
    for(int i=0; i<10;i++)
    {
         if(TODOno[i]!="\0")
        {
             counter++;
             cout<<"|"<<TODOno[i]<<" | "<< TODOLIST[i]<<"\n";
         }
    }
    if(counter==0)
    {
        cout<<"NO TASK IS FOUND IN TO DO LIST \n";
    }

}

void  DeleteTask(string de)
{
    int counter=0;
    for(int i=0;i<10;i++)
    {
         if(TODOno[i]==de)
        {
            counter++;
            TODOLIST[i] =" ";
            TODOno[i] =" ";
            cout<<"successfuly deleted\n"<<endl;
        }
    }
    if(counter==0)
    {
        cout<<"task No is not in the list\n";
    }

}
int main()
{
    
    cout<<"MENUE\n";
    string TODOno;
    int ch;
    do{
        cout<<"\nEnter the option you want to be perform\n";
        cout<<"**************************************\n";
        cout<<"**1= ADD to the list \n";
        cout<<"**2= View the list \n";
        cout<<"**3= Delete the list\n";
        cout<<"**************************************\n";
        int choice;
        cout<<"Enter your choice\n";
        cin>>choice;
       if(choice==1)
        {
             ADDtolist(); 
            
        }
        else if(choice== 2)
        {
            Viewthelist();          
        }

        else if(choice== 3)
        {
            cout<<"Enter the id to be delete\n";
            cin>>TODOno;
            DeleteTask(TODOno);
        }
        else{
        cout<<"\nInvalied choicec\n";
        }
         cout<<"\n\nDO YOU WANT MORE CHOICE [1||0]\n";
		cin>>ch;
    }while (ch==1);
    return 0;
}