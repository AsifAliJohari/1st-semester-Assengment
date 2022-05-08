#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{ cout<<"********************************************************************************"<<endl;
  cout<<"\t\t\t\tAsif Ali assignment\n\n\n";
  cout<<"Submitted to: Dr.Irshad Ali\n\n";
  cout<<"********************************************************************************"<<endl;
  cout<<"Note:"<<endl;
  cout<<"First to show menu enter \'m\'"<<endl;
  cout<<"To Exit program(go outside of program enter \'e\')"<<endl;
  cout<<"Use list number for show sub object of menu. Exp: 3 for exit"<<endl;
  cout<<"Just enter these S.No 1,2 and 3"<<endl;
  cout<<"********************************************************************************"<<endl; 
                                                            
  int i,j,h,choose;    //verable declearation  
  for(h=0;h!=3;)        // most outer loop for menu
    {
      cout<<"M. Menu"<<endl;
      cout<<"E. Exit"<<endl;
      char ch;           // declear character 
      cin>>ch;           // get input form user to show menu
      if(ch=='m')        // if user enter m then menu will b shown
        {
          for(i=1;i!=3;)   //loop for main menu list it wil terminat when i become 3  
            {
              cout<<"A1. Student biodata"<<endl;
              cout<<"B2. deptment information"<<endl;
              cout<<"3. Exit"<<endl;
              cin>>choose;
              if(choose==1)
                {
                  for(j=0;j!=3;j++)    // most inner loop
                    {
                      int choes;
                      cout<<"a1. name"<<endl;
                      cout<<"a2. Age"<<endl;
                      cout<<"a3. Exit"<<endl;
                      cin>>choes;
                      if(choes==1)
                        {
                          string name;
                          cout<<"Name: ";
                          cin>>name;
                        } 
                      if(choes==2)
                        { 
                          int age;
                          cout<<"age:  ";
                          cin>>age;
                        } 
                      if(choes==3)
                          j=2; 
                    }//system("cls");
                }
              if(choose==2)
                {
                  for(j=0;j!=3;j++)
                    {
                      int no;
                      cout<<"b1. deptment"<<endl;
                      cout<<"b2. year of admision"<<endl;
                      cout<<"3. Exit"<<endl;
                      cin>>no;
                      if(no==1)
                        {
                          string dept;
                          cout<<"deptment: ";
                          cin>>dept;
                        } 
                      if(no==2)
                        {  
                          int year;
                          cout<<"year:  ";
                          cin>>year;
                        } 
                      if(no==3)
                          j=2; 
                      
                    }//system("cls");
                 }
               if(choose==3) //when choose equal to 3 then loop will be terminate
                   i=3;
            }
          system("cls");      // use to clear screen 
        }
        if(ch=='e')
        return 0;
    }
  system("PAUSE");
  return EXIT_SUCCESS;
}
