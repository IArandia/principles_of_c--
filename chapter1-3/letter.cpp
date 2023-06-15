#include "std_lib_facilities.cpp"

int main()
{
    
    cout <<"1. Please enter your first name\n"
         <<"2. enter your friend's name\n"
         <<"3. type 'm' if he is male and 'f' if is female\n"
         <<"4. enter your age\n";
    char friend_sex = 0;
    int age = 0;
    string first_name,friend_name; // first_name is a variable of type string
    cin >> first_name>>friend_name>>friend_sex>>age; // read characters into first_name
    cout<<"----------------------\n" 
        << "Dear, " << first_name << "!\n"
        <<"how are you? I'm fine and i miss you.\n"
        <<"I wanted to ask you if you maybe have seen "<<friend_name<<" lately.\n";


    if(friend_sex == 'm'){
            cout<<"If you see "<<friend_name<<" please ask him to call me\n";
    }
    else{
            cout<<"If you see "<<friend_name<<" please ask her to call me\n";
    }
    
    
    if(age > 110 || age < 0){
            simple_error("you're kidding!");
    }
    else{
            cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
    }
    
    keep_window_open();
    return 0;

}